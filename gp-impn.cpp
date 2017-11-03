#include "gp-impn.h"

// TODO: Find alternative to immediate mode rendering. VBO? GLSL?
// TODO: PosX and Posy values are defined as int32 in GP definitions. These shall be converted to float according to screen size, etc. 

// AGGP_Line class
AGGP_Line::AGGP_Line(AGGP_LineDef argDef)
: AGGPIface(A661Const::A661Constant16Bit::A661_GP_LINE), def(argDef) {}
void AGGP_Line::display() // virtual
{
  if (!def.Common.IsVisible)
    return;

  glPushMatrix();
  glLoadIdentity();
  
  ColorRGB color = AGGlobalParam::colorMap[def.ColorIndex];
  glColor4f(color.Red, color.Green, color.Blue, 1.0F);

  glBegin(GL_LINES);
  glVertex2i(def.PosXStart, def.PosYStart);
  glVertex2i(def.PosXEnd, def.PosYEnd);
  glEnd();
  
  glPopMatrix();
}

// AGGP_ArcCircle class
AGGP_ArcCircle::AGGP_ArcCircle(AGGP_ArcCircleDef argDef)
: AGGPIface(A661Const::A661Constant16Bit::A661_GP_ARC_CIRCLE), def(argDef) {}
void AGGP_ArcCircle::display() // virtual
{
  if (!def.Common.IsVisible)
    return;

  glPushMatrix();
  glLoadIdentity();

  // Number of triangle fan slices increase as the circle gets larger to prevent visible edges.
  unsigned int fullCircleNumSlices = CIRCLE_SLICES_PER_RADIUS * def.Radius;
  fullCircleNumSlices = (fullCircleNumSlices < CIRCLE_SLICES_MIN) ? CIRCLE_SLICES_MIN : fullCircleNumSlices;
  unsigned int numSlices = std::floorf(fullCircleNumSlices * (def.EndAngle - def.StartAngle) / 360.0F);
  
  // TODO: Assess performance of trigonometric ops (lookup table better option?). Possible drawback will be eliminated with use of VBO.
  glTranslatef(static_cast<GLfloat>(def.PosX), static_cast<GLfloat>(def.PosY), 0.0F);
  ColorRGB color = AGGlobalParam::colorMap[def.ColorIndex];
  glColor4f(color.Red, color.Green, color.Blue, 1.0F);

  float xVal = 0.0F;
  float yVal = 0.0F;
  if (def.IsFilled == true)
  {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(0, 0);
  }
  else
    glBegin(GL_LINE_STRIP);
  for (unsigned int i = 0; i < (numSlices + 1); i++)
  {
    xVal = def.Radius * cos(2.0F * M_PI / fullCircleNumSlices * i + AGUtils::Math::degToRad(def.StartAngle));
    yVal = def.Radius * sin(2.0F * M_PI / fullCircleNumSlices * i + AGUtils::Math::degToRad(def.StartAngle));
    glVertex2i(xVal, yVal);
  }
  xVal = def.Radius * cos(AGUtils::Math::degToRad(def.EndAngle));
  yVal = def.Radius * sin(AGUtils::Math::degToRad(def.EndAngle));
  glVertex2i(xVal, yVal);
  glEnd();

  glPopMatrix();
}
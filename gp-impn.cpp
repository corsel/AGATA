#include "gp-impn.h"

// TODO: Find alternative to immediate mode rendering. VBO? GLSL?
// TODO: PosX and Posy values are defined as int32 in GP definitions. These shall be converted to float according to screen size, etc. 

// AGGP_Line class
AGGP_Line::AGGP_Line() {}
AGGP_Line::AGGP_Line(AGGP_LineDef argDef)
: def(argDef) {}
void AGGP_Line::display() // virtual
{
  glPushMatrix();
  glLoadIdentity();
  
  ColorRGB color = AGGlobalParam::colorMap[def.ColorIndex];
  glColor4f(color.Red, color.Green, color.Blue, 1.0F);

  glBegin(GL_LINE);
  glVertex2i(def.PosXStart, def.PosYStart);
  glVertex2i(def.PosXEnd, def.PosYEnd);
  glEnd();
  
  glPopMatrix();
}

// AGGP_ArcCircle class
AGGP_ArcCircle::AGGP_ArcCircle() {}
AGGP_ArcCircle::AGGP_ArcCircle(AGGP_ArcCircleDef argDef)
: def(argDef) {}
void AGGP_ArcCircle::display() // virtual
{
  glPushMatrix();
  glLoadIdentity();

  // Number of triangle fan slices increase as the circle gets larger to prevent visible edges.
  unsigned int numSlices = CIRCLE_SLICES_PER_RADIUS * def.Radius;
  numSlices = (numSlices < CIRCLE_SLICES_MIN) ? CIRCLE_SLICES_MIN : numSlices;
  
  // TODO: Assess performance of trigonometric ops (lookup table better option?).
  glTranslatef(static_cast<GLfloat>(def.PosX), static_cast<GLfloat>(def.PosY), 0.0F);
  ColorRGB color = AGGlobalParam::colorMap[def.ColorIndex];
  glColor4f(color.Red, color.Green, color.Blue, 1.0F);

  glBegin(GL_TRIANGLE_FAN);
  glVertex2i(0, 0);
  for (unsigned int i = 0; i < (numSlices + 1); i++)
  {
    float xVal = def.Radius * cos(2.0F * M_PI / numSlices * i);
    float yVal = def.Radius * sin(2.0F * M_PI / numSlices * i);
    glVertex2i(xVal, yVal);
  }
  glEnd();

  glPopMatrix();
}
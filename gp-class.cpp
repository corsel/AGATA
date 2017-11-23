#include "gp-class.h"

// TODO: Find alternative to immediate mode rendering. VBO? GLSL?
// TODO: PosX and Posy values are defined as int32 in GP definitions. These shall be converted to float according to screen size, etc. 

// Line class
AGGPClass::Line::Line(AGGPDef::Line argDef)
: def(argDef) {}
void AGGPClass::Line::draw()
{
  glPushMatrix();
  glLoadIdentity();
  
  ColorRGB color = AGGlobal::colorMap[def.ColorIndex];
  glColor4f(color.Red, color.Green, color.Blue, 1.0F);

  glBegin(GL_LINES);
  glVertex2i(def.PosXStart, def.PosYStart);
  glVertex2i(def.PosXEnd, def.PosYEnd);
  glEnd();
  
  glPopMatrix();
}

// ArcCircle class
AGGPClass::ArcCircle::ArcCircle(AGGPDef::ArcCircle argDef)
: def(argDef) {}
void AGGPClass::ArcCircle::ArcCircle::draw()
{
  glPushMatrix();
  glLoadIdentity();

  // Number of triangle fan slices increase as the circle gets larger to prevent visible edges.
  unsigned int fullCircleNumSlices = static_cast<unsigned int>(AGGPClass::Const::CIRCLE_SLICES_PER_RADIUS) * def.Radius;
  fullCircleNumSlices = (fullCircleNumSlices < AGGPClass::Const::CIRCLE_SLICES_MIN) ? AGGPClass::Const::CIRCLE_SLICES_MIN : fullCircleNumSlices;
  unsigned int numSlices = static_cast<unsigned int>(std::floor(fullCircleNumSlices * (def.EndAngle - def.StartAngle) / 360.0F));
  
  // TODO: Assess performance of trigonometric ops (lookup table better option?). Possible drawback will be eliminated with use of VBO.
  glTranslatef(static_cast<GLfloat>(def.PosX), static_cast<GLfloat>(def.PosY), 0.0F);
  ColorRGB color = AGGlobal::colorMap[def.ColorIndex];
  glColor4f(color.Red, color.Green, color.Blue, 1.0F);

  GLint xVal = 0;
  GLint yVal = 0;
  if (def.IsFilled == true)
  {
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(0, 0);
  }
  else
    glBegin(GL_LINE_STRIP);
  for (unsigned int i = 0; i < (numSlices + 1); i++)
  {
    xVal = static_cast<GLint>(def.Radius * cos(2.0F * M_PI / fullCircleNumSlices * i + AGUtils::Math::degToRad(static_cast<float>(def.StartAngle))));
    yVal = static_cast<GLint>(def.Radius * sin(2.0F * M_PI / fullCircleNumSlices * i + AGUtils::Math::degToRad(static_cast<float>(def.StartAngle))));
    glVertex2i(xVal, yVal);
  }
  xVal = static_cast<GLint>(def.Radius * cos(AGUtils::Math::degToRad(static_cast<float>(def.EndAngle))));
  yVal = static_cast<GLint>(def.Radius * sin(AGUtils::Math::degToRad(static_cast<float>(def.EndAngle))));
  glVertex2i(xVal, yVal);
  glEnd();

  glPopMatrix();
}
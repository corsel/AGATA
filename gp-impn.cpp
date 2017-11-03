#include "gp-implementn.h"

// TODO: How are color indices predefined according to ARINC661? A661_COLOR_INDEX should be mapped to glColor4f rgba parameters inside each GP class' display function.
// TODO: PosX and Posy values are defined as int32 in GP definitions. These shall be converted to float according to screen size, etc. 

// AGGP_Line class
AGGP_Line::AGGP_Line() {}
AGGP_Line::AGGP_Line(AGGP_LineDef argDef)
: def(argDef) {}
void AGGP_Line::display() // virtual
{
  glPushMatrix();
  glLoadIdentity();
  
  glBegin(GL_LINE);
  glVertex2f(def.PosXStart, def.PosYStart);
  glVertex2f(def.PosXEnd, def.PosYEnd);
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
  glBegin(GL_TRIANGLE_FAN);
  glVertex2f(def.PosX, def.PosY);
  for (unsigned int i = 0; i < (numSlices + 1); i++)
  {
    float xVal = def.Radius * cos(2.0F * M_PI / numSlices * i);
    float yVal = def.Radius * sin(2.0F * M_PI / numSlices * i);
    glVertex2f(xVal, yVal);
  }
  glEnd();

  glPopMatrix();
}
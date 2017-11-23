#ifndef _GP_CLASS_H_INCLUDED
#define _GP_CLASS_H_INCLUDED

/*
This file defines graphical primitive classes.
All graphical primitives derive from AGGPInterface base class.
*/

#define _USE_MATH_DEFINES

#include <math.h>
#include <GL\freeglut.h>
#include "a661-consts.h"
#include "global-params.h"
#include "gp-def.h"
#include "utils.h"

namespace AGGPClass
{
  namespace Const
  {
    const float CIRCLE_SLICES_PER_RADIUS = 3.0F;
    const unsigned int CIRCLE_SLICES_MIN = 7;
  }

  class Line
  {
  private:
    AGGPDef::Line def;

  public:
    Line(AGGPDef::Line argDef);
    void draw(void);
  };

  class ArcCircle
  {
  private:
    AGGPDef::ArcCircle def;

  public:
    ArcCircle(AGGPDef::ArcCircle argDef);
    void draw(void);
  };
}

#endif // _GP_CLASS_H_INCLUDED
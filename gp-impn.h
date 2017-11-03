#ifndef GP_IMPLEMENTN_H_INCLUDED
#define GP_IMPLEMENTN_H_INCLUDED

/*
This file defines graphical primitive classes.
All graphical primitives derive from AGGPInterface base class.
*/

#define _USE_MATH_DEFINES

#include <math.h>
#include <GL/freeglut.h>
#include "gp-iface.h"
#include "gp-definitions.h"

const unsigned int CIRCLE_SLICES_PER_RADIUS = 20;
const unsigned int CIRCLE_SLICES_MIN = 7;

class AGGP_Line : public AGGPIface
{
private:
  AGGP_LineDef def;

public:
  AGGP_Line(void);
  AGGP_Line(AGGP_LineDef argDef);
  virtual void display(void);
};

class AGGP_ArcCircle : public AGGPIface
{
private:
  AGGP_ArcCircleDef def;

public:
  AGGP_ArcCircle(void);
  AGGP_ArcCircle(AGGP_ArcCircleDef argDef);
  virtual void display(void);
};

#endif // GP_IMPLEMENTN_H_INCLUDED

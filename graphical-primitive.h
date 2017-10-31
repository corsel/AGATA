#ifndef AG_GRAPHICAL_PRIMITIVE_H_INCLUDED
#define AG_GRAPHICAL_PRIMITIVE_H_INCLUDED

/*
This file declares AGGPInterface class.
AGGPInterface is the abstract class interfaced to glut functions for rendering graphical primitives. 
*/

#include "GL\freeglut.h"
#include "gp-types.h"
#include "a661-consts.h"

class AGGPIface // abstract
{
private:
  A661Constant16Bit widgetType;

public:
  virtual void display(void) = 0;
};

#endif // AG_GRAPHICAL_PRIMITIVE_H_INCLUDED
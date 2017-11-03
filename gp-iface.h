#ifndef GP_IFACE_H_INCLUDED
#define GP_IFACE_H_INCLUDED

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
  A661Constant16Bit wdgType;

public:
  virtual void display(void) = 0;
};

#endif // GP_IFACE_H_INCLUDED
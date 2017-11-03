#ifndef _GP_IFACE_H_INCLUDED
#define _GP_IFACE_H_INCLUDED

/*
This file declares AGGPInterface class.
AGGPInterface is the abstract class interfaced to glut functions for rendering graphical primitives. 
*/

#include "GL\freeglut.h"
#include "types.h"
#include "a661-consts.h"

class AGGPIface // abstract
{
protected:
  A661Const::A661Constant16Bit wdgType;

public:
  AGGPIface(A661Const::A661Constant16Bit argWdgType);
  virtual void display(void) = 0;
};

#endif // _GP_IFACE_H_INCLUDED
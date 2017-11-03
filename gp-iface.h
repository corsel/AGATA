#ifndef _GP_IFACE_H_INCLUDED
#define _GP_IFACE_H_INCLUDED

/*
This file declares AGGPInterface class.
AGGPInterface is the abstract class interfaced to glut functions for rendering graphical primitives. 
*/

#include "GL\freeglut.h"
#include "ag-type.h"
#include "a661-const.h"

class AGGPIface // abstract
{
private:
  A661Const::A661Constant16Bit wdgType;

public:
  virtual void display(void) = 0;
};

#endif // _GP_IFACE_H_INCLUDED
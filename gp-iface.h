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
  AGType::AGParam_WdgCommon wdgCommonParam;
  friend class AGGPIfaceComparator;

public:
  AGGPIface(AGType::AGParam_WdgCommon argCommonParam);
  virtual void display(void) = 0;
};

class AGGPIfaceComparator
{
public:
  bool operator()(AGGPIface* arg0, AGGPIface* arg1);
};

#endif // _GP_IFACE_H_INCLUDED
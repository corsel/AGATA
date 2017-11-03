#ifndef _AG_GLUT_FUNC_H_INCLUDED
#define _AG_GLUT_FUNC_H_INCLUDED

/*
This file includes functions for freeglut rendering functionality.
*/

#include "GL\freeglut.h"
#include "ag-global-param.h"
#include "df-parser.h"
#include "gp-def.h"

namespace AGGlutFunc
{
  void display(void);
  void initGl(int* argc, char* argv[]);
  void initLayer(void);
  void iterateGPs(void);
}

#endif // _AG_GLUT_FUNCTIONS_H_INCLUDED

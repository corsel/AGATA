#ifndef _GLUT_FUNCS_H_INCLUDED
#define _GLUT_FUNCS_H_INCLUDED

/*
This file includes functions for freeglut rendering functionality.
*/

#include "GL\freeglut.h"
#include "global-params.h"
#include "df-parser.h"
#include "gp-def.h"

namespace AGGlutFunc
{
  void display(void);
  void initGl(int* argc, char* argv[]);
  void initLayer(void);
  void iterateGPs(void);
}

#endif // _GLUT_FUNCS_H_INCLUDED

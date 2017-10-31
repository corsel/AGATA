#ifndef GLUT_FUNCTIONS_H_INCLUDED
#define GLUT_FUNCTIONS_H_INCLUDED

/*
This file includes functions for freeglut rendering functionality.
*/

#include "GL\freeglut.h"
#include "global-params.h"
#include "gp-definitions.h"

namespace AGGlutFuncs
{
  void display(void);
  void initialize(int* argc, char* argv[]);
  void iterateGPs(void);
}

#endif // GLUT_FUNCTIONS_H_INCLUDED

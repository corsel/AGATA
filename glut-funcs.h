#ifndef _GLUT_FUNCS_H_INCLUDED
#define _GLUT_FUNCS_H_INCLUDED

/*
This file includes functions for freeglut rendering functionality.
*/

#include "GL\freeglut.h"
#include "df-parser.h"
#include "global-params.h"
#include "gp-def.h"
#include "socket.h"

namespace AGGlutFunc
{
  void display(void);
  void initGl(int* argc, char* argv[]);
  void initLayer(void);
  void iterateWdg(void);
  void keyboard(unsigned char argKey, int argX, int argY);
}

#endif // _GLUT_FUNCS_H_INCLUDED

#include "GL\freeglut.h"
#include "glut-functions.h"

int main(int argc, char* argv[])
{
  AGGlutFuncs::initialize(&argc, argv);
  glutMainLoop();
  return 0;
}
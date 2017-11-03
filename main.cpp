#include "GL\freeglut.h"
#include "ag-glut-func.h"

int main(int argc, char* argv[])
{
  AGGlutFunc::initLayer();
  AGGlutFunc::initGl(&argc, argv);
  glutMainLoop();
  return 0;
}
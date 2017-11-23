#include "GL\freeglut.h"
#include "glut-funcs.h"
#include "socket.h" // debug

int main(int argc, char* argv[])
{
  AGGlutFunc::initLayer();
  AGGlutFunc::initGl(&argc, argv);
  glutMainLoop();
  
  return 0;
}
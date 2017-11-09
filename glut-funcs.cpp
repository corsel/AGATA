#include "glut-funcs.h"

void AGGlutFunc::display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  AGGlutFunc::iterateGPs();

  glutSwapBuffers();
}
void AGGlutFunc::initGl(int* argc, char* argv[])
{
  glutInit(argc, argv);
  glutInitWindowSize(AGGlobal::AG_WINDOW_WIDTH, AGGlobal::AG_WINDOW_HEIGHT);
  glutCreateWindow("AGATA Sandbox");
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
  glClearColor(0.0F, 0.0F, 0.0F, 1.0F);
  
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0, AGGlobal::AG_WINDOW_WIDTH, 0, AGGlobal::AG_WINDOW_HEIGHT);
  glMatrixMode(GL_MODELVIEW);

  glutDisplayFunc(display);
}
void AGGlutFunc::initLayer()
{
  // TODO: Dummy implementation. A generalized parser object is to be used.
  AGDFParserIface* dummyParser = new AGDFParserDummy();
  dummyParser->processDFMsg("No file input is needed for dummy parser.", &AGGlobal::gpSet, &AGGlobal::colorMap);

  AGSocket* serverSocket = new AGSocket;

}
void AGGlutFunc::iterateGPs()
{
  for (AGGPIface* const& iter : AGGlobal::gpSet)
  {
    iter->display();
  }
}
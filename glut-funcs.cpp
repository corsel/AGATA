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
  glutInitWindowSize(AGGlobalParam::AG_WINDOW_WIDTH, AGGlobalParam::AG_WINDOW_HEIGHT);
  glutCreateWindow("AGATA Sandbox");
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
  glClearColor(0.0F, 0.0F, 0.0F, 1.0F);
  
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0, AGGlobalParam::AG_WINDOW_WIDTH, 0, AGGlobalParam::AG_WINDOW_HEIGHT);
  glMatrixMode(GL_MODELVIEW);

  glutDisplayFunc(display);
}
void AGGlutFunc::initLayer()
{
  // TODO: Dummy implementation. A generalized parser object is to be used.
  DFParserIface* dummyParser = new DFParserDummy();
  dummyParser->processDF("No file input is needed for dummy parser.", &AGGlobalParam::gpVector, &AGGlobalParam::colorMap);
}
void AGGlutFunc::iterateGPs()
{
  for (std::vector<AGGPIface*>::iterator iter = AGGlobalParam::gpVector.begin();
    iter < AGGlobalParam::gpVector.end();
    iter++)
  {
    (*iter)->display();
  }
}
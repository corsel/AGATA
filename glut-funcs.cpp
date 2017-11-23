#include "glut-funcs.h"

void AGGlutFunc::display()
{
  glClear(GL_COLOR_BUFFER_BIT);

  AGGlutFunc::iterateWdg();

  glutSwapBuffers();
}
void AGGlutFunc::initGl(int* argc, char* argv[])
{
  glutInit(argc, argv);
  glutInitWindowSize(AGGlobal::AG_WINDOW_WIDTH, AGGlobal::AG_WINDOW_HEIGHT);
  glutCreateWindow("AGATA Sandbox");
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
  glClearColor(0.0F, 0.0F, 0.0F, 1.0F);

  //glEnable(GL_POLYGON_SMOOTH);
  glHint(GL_POLYGON_SMOOTH_HINT | GL_LINE_SMOOTH_HINT, GL_NICEST);
  
  glMatrixMode(GL_PROJECTION);
  gluOrtho2D(0, AGGlobal::AG_WINDOW_WIDTH, 0, AGGlobal::AG_WINDOW_HEIGHT);
  glMatrixMode(GL_MODELVIEW);

  glutKeyboardFunc(keyboard);
  glutDisplayFunc(display);
}
void AGGlutFunc::initLayer()
{
  // TODO: Dummy implementation. A generalized parser object is to be used.
  AGDFParserIface* dummyParser = new AGDFParserDummy();
  dummyParser->processDFMsg("No file input is needed for dummy parser.", &AGGlobal::wdgRootSet, &AGGlobal::colorMap);
}
void AGGlutFunc::iterateWdg()
{
  for (AGWdgIface* const& iter : AGGlobal::wdgRootSet)
  {
    iter->periodic();
  }
}
void AGGlutFunc::keyboard(unsigned char argKey, int argX, int argY)
{
  if (argKey == 'x')
    AGGlobal::serverSocket.terminate();
}
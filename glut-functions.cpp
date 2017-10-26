#include "glut-functions.h"

void AGGlutFuncs::display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glutSwapBuffers();
}

void AGGlutFuncs::initialize(int* argc, char* argv[])
{
	glutInit(argc, argv);
	glutInitWindowSize(AG_WINDOW_WIDTH, AG_WINDOW_HEIGHT);
	glutCreateWindow("AGATA Sandbox");
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glClearColor(0.0F, 0.0F, 0.0F, 1.0F);

	glutDisplayFunc(display);
	glutIdleFunc(display);
}
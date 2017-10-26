#ifndef AG_GRAPHICAL_PRIMITIVE_H_INCLUDED
#define AG_GRAPHICAL_PRIMITIVE_H_INCLUDED

#include "GL\freeglut.h"

/*
Abstract class for AGATA Graphical Primitives. All graphical primitive derived classes will be prefixed "AGGP_".
*/
class AGGPIface // abstract
{
private:
public:
	virtual void display(void) = 0;
};

#endif // AG_GRAPHICAL_PRIMITIVE_H_INCLUDED
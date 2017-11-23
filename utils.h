#ifndef _UTILS_H_INCLUDED
#define _UTILS_H_INCLUDED

/*
This file includes common utility functions to be used in this project.
*/

#define _USE_MATH_DEFINES

#include <math.h>

namespace AGUtils
{
  namespace Math
  {
    float radToDeg(float argRad);
    float degToRad(float argRad);
  }
}

#endif // _UTILS_H_INCLUDED
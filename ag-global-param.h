#ifndef _AG_GLOBAL_PARAM_H_INCLUDED
#define _AG_GLOBAL_PARAM_H_INCLUDED

/*
This file includes global constants used for freeglut rendering. 
*/

#include <map>
#include <vector>
#include "ag-type.h"
#include "gp-iface.h"

namespace AGGlobalParam
{
  // Simulated MFD screen size
  extern const int AG_WINDOW_WIDTH;
  extern const int AG_WINDOW_HEIGHT;

  // Graphical primitives to be rendered by glut
  extern std::vector<AGGPIface*> gpVector;

  // Mapping data between ARINC661 ColorIndex parameter and their respective RGB values
  extern std::map<AGType::AGParam_Uint8, AGType::ColorRGB> colorMap;
}
#endif // _AG_GLOBAL_PARAM_H_INCLUDED
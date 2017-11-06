#ifndef _GLOBAL_PARAMS_H_INCLUDED
#define _GLOBAL_PARAMS_H_INCLUDED

/*
This file includes global constants used for freeglut rendering. 
*/

#include <map>
#include <set>
#include "types.h"
#include "gp-iface.h"

namespace AGType
{
  typedef std::set<AGGPIface*, AGGPIfaceComparator> AGGPIfaceSet;
  typedef std::map<AGType::AGParam_Uint8, AGType::ColorRGB> AGColorMap;
}

namespace AGGlobal
{
  // Simulated MFD screen size
  extern const int AG_WINDOW_WIDTH;
  extern const int AG_WINDOW_HEIGHT;

  // Graphical primitives to be rendered by glut
  extern AGType::AGGPIfaceSet gpSet;

  // Mapping data between ARINC661 ColorIndex parameter and their respective RGB values
  extern AGType::AGColorMap colorMap;
}

#endif // _GLOBAL_PARAMS_H_INCLUDED
#ifndef _GLOBAL_PARAMS_H_INCLUDED
#define _GLOBAL_PARAMS_H_INCLUDED

/*
This file includes global constants used for freeglut rendering. 
*/

#include <map>
#include <set>
#include "socket.h"
#include "wdg-iface.h"
#include "types.h"


namespace AGType
{
  typedef std::set<AGWdgIface*, AGWdgIfaceComparator> AGWdgIfaceSet;
  typedef std::map<AGType::AGParam_Uint8, AGType::ColorRGB> AGColorMap;
}

namespace AGGlobal
{
  // Simulated MFD screen size
  extern const int AG_WINDOW_WIDTH;
  extern const int AG_WINDOW_HEIGHT;

  // Graphical primitives to be rendered by glut
  extern AGType::AGWdgIfaceSet wdgRootSet;

  // Mapping data between ARINC661 ColorIndex parameter and their respective RGB values
  extern AGType::AGColorMap colorMap;

  // This is here for debugging purposes.
  extern AGSocket serverSocket;
}

#endif // _GLOBAL_PARAMS_H_INCLUDED
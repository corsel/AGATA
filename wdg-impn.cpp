#include "wdg-impn.h"

// Line class
AGWdgClass::Line::Line(AGType::AGParam_WdgCommon argWdgCommon, AGGPDef::Line argGPDef)
: AGWdgIface(argWdgCommon), graphical(argGPDef) {}
void AGWdgClass::Line::periodic()
{
  graphical.draw();
  for (AGWdgIface* iter : wdgChildVector)
  {
    iter->periodic();
  }
}

// ArcCircle class
AGWdgClass::ArcCircle::ArcCircle(AGType::AGParam_WdgCommon argWdgCommon, AGGPDef::ArcCircle argGPDef)
: AGWdgIface(argWdgCommon), graphical(argGPDef) {}
void AGWdgClass::ArcCircle::periodic()
{
  graphical.draw();
  for (AGWdgIface* iter : wdgChildVector)
  {
    iter->periodic();
  }
}
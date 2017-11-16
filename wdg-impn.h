#ifndef _WDG_IMPN_H_INCLUDED
#define _WDG_IMPN_H_INCLUDED

/*
This file includes widget class implementations deriving from AGWdgIface.
*/

#include "gp-class.h"
#include "wdg-iface.h"

namespace AGWdgClass
{
  class Line : public AGWdgIface
  {
  private:
    AGGPClass::Line graphical;

  public:
    Line(AGType::AGParam_WdgCommon argWdgCommon, AGGPDef::Line argGPDef);
    virtual void periodic(void);
  };

  class ArcCircle : public AGWdgIface
  {
  private:
    AGGPClass::ArcCircle graphical;

  public:
    ArcCircle(AGType::AGParam_WdgCommon argWdgCommon, AGGPDef::ArcCircle argGPDef);
    virtual void periodic(void);
  };
}

#endif // _WDG_IMPN_H_INCLUDED
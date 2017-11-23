#ifndef _WDG_IFACE_H_INCLUDED
#define _WDG_IFACE_H_INCLUDED

/*
This file includes interface class for widgets.
*/

#include <vector>
#include "types.h"

class AGWdgIface // abstract
{
protected:
  AGType::AGParam_WdgCommon wdgCommonParam;
  std::vector<AGWdgIface*> wdgChildVector; 
  friend class AGWdgIfaceComparator;

public:
  AGWdgIface(AGType::AGParam_WdgCommon argCommonParam);
  virtual void periodic(void) = 0;
};

class AGWdgIfaceComparator
{
public:
  bool operator()(AGWdgIface* arg0, AGWdgIface* arg1);
};

#endif // _WDG_IFACE_H_INCLUDED
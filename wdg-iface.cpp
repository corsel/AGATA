#include "wdg-iface.h"

// AGWdgIface class
AGWdgIface::AGWdgIface(AGType::AGParam_WdgCommon argCommonParam)
: wdgCommonParam(argCommonParam) {}

// AGWdgIfaceComparator class
bool AGWdgIfaceComparator::operator()(AGWdgIface* arg0, AGWdgIface* arg1)
{
  return (arg0->wdgCommonParam.WdgIdent < arg1->wdgCommonParam.WdgIdent);
}
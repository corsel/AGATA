#include "gp-iface.h"

// AGGPIface class
AGGPIface::AGGPIface(AGType::AGParam_WdgCommon argCommonParam)
: wdgCommonParam(argCommonParam) {}

// AGGPIfaceComparator class
bool AGGPIfaceComparator::operator()(AGGPIface* arg0, AGGPIface* arg1)
{
  return (arg0->wdgCommonParam.WdgIdent < arg1->wdgCommonParam.WdgIdent);
}

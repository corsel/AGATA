#include "df-parser.h"

// DFParserDummy class
DFParserDummy::DFParserDummy() {}
std::vector<AGGPIface*> DFParserDummy::generateGPVector(const char* argFileName)
{
  std::vector<AGGPIface*> returnVec;

  AGGP_ArcCircleDef circleDef =
  {
    AGParam_WdgCommon
    {
      0x0001, // WdgIdent
      0x0000, // ParentIdent
      true,   // IsVisible
      0x0000, // StyleSet
      false   // IsAnonymous
    },
    0,
    0,
    0,
    false,
    true,
    0,
    50,
    0,
    90
  };

  returnVec.push_back(new AGGP_ArcCircle(circleDef));

  return std::move(returnVec);
}
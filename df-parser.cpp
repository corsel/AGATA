#include "df-parser.h"

// DFParserDummy class
std::vector<AGGPIface*> DFParserDummy::generateGPVector() // private
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
    500,   // PosX
    200,   // PosY
    3,     // ColorIndex
    false, // HasHalo
    true,  // IsFilled
    0,     // FillIndex
    20,    // Radius
    0,     // StartAngle
    90     // EndAngle
  };

  returnVec.push_back(new AGGP_ArcCircle(circleDef));

  circleDef =
  {
    AGParam_WdgCommon
    {
      0x0002, // WdgIdent
      0x0000, // ParentIdent
      true,   // IsVisible
      0x0000, // StyleSet
      false   // IsAnonymous
    },
    300,   // PosX
    300,   // PosY
    2,     // ColorIndex
    false, // HasHalo
    true,  // IsFilled
    0,     // FillIndex
    70,    // Radius
    0,     // StartAngle
    90     // EndAngle
  };

  returnVec.push_back(new AGGP_ArcCircle(circleDef));

  return std::move(returnVec);
}
std::map<AGType::AGParam_Uint8, AGType::ColorRGB> DFParserDummy::generateColorMap() // private
{
  std::map<AGType::AGParam_Uint8, AGType::ColorRGB> returnMap {
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x01, { 1.0F, 0.0F, 0.0F }), // 0x01 : red
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x02, { 0.0F, 1.0F, 0.0F }), // 0x02 : green
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x03, { 0.0F, 0.0F, 1.0F }), // 0x03 : blue
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x04, { 0.7F, 0.7F, 0.7F })  // 0x04 : light gray
  };

  return std::move(returnMap);
}

DFParserDummy::DFParserDummy() {}
void DFParserDummy::processDF(
  const char* argFileName,
  std::vector<AGGPIface*>* argOutGPIfaceVector/* = NULL*/,
  std::map<AGType::AGParam_Uint8, AGType::ColorRGB>* argOutColorMap/* = NULL*/) // virtual
{
  if (argOutGPIfaceVector)
  {
    *argOutGPIfaceVector = generateGPVector();
  }
  
  if (argOutColorMap)
  {
    *argOutColorMap = generateColorMap();
  }
}
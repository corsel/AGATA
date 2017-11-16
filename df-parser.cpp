#include "df-parser.h"

// AGDFParserDummy class
AGType::AGWdgIfaceSet AGDFParserDummy::generateGPSet() // private
{
  AGType::AGWdgIfaceSet returnSet;

  AGType::AGParam_WdgCommon commonParam
  {
    A661Const::A661Constant16Bit::A661_GP_ARC_CIRCLE, // WdgType
    0x0001,                                           // WdgIdent
    0x0000,                                           // ParentIdent
    true,                                             // IsVisible
    0x0000,                                           // StyleSet
    false                                             // IsAnonymous
  };
  AGGPDef::ArcCircle circleDef =
  {
    500,   // PosX
    200,   // PosY
    3,     // ColorIndex
    false, // HasHalo
    false, // IsFilled
    0,     // FillIndex
    20,    // Radius
    145,   // StartAngle
    270    // EndAngle
  };
  returnSet.insert(new AGWdgClass::ArcCircle(commonParam, circleDef));

  commonParam.WdgIdent = 0x0002;
  circleDef =
  {
    300,   // PosX
    300,   // PosY
    2,     // ColorIndex
    false, // HasHalo
    true,  // IsFilled
    0,     // FillIndex
    70,    // Radius
    45,    // StartAngle
    120    // EndAngle
  };
  returnSet.insert(new AGWdgClass::ArcCircle(commonParam, circleDef));

  commonParam.WdgType = A661Const::A661Constant16Bit::A661_GP_LINE;
  commonParam.WdgIdent = 0x0003;
  AGGPDef::Line lineDef =
  {
    4,     // ColorIndex
    false, // HasHalo
    200,   // PosXStart
    200,   // PosYStart
    400,   // PosXEnd
    500    // PosYEnd
  };
  returnSet.insert(new AGWdgClass::Line(commonParam, lineDef));

  return std::move(returnSet);
}
AGType::AGColorMap AGDFParserDummy::generateColorMap() // private
{
  std::map<AGType::AGParam_Uint8, AGType::ColorRGB> returnMap {
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x01, { 1.0F, 0.0F, 0.0F }), // 0x01 : red
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x02, { 0.0F, 1.0F, 0.0F }), // 0x02 : green
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x03, { 0.0F, 0.0F, 1.0F }), // 0x03 : blue
    std::make_pair<AGType::AGParam_Uint8, AGType::ColorRGB>(0x04, { 0.7F, 0.7F, 0.7F })  // 0x04 : light gray
  };

  return std::move(returnMap);
}

AGDFParserDummy::AGDFParserDummy() {}
void AGDFParserDummy::processDFMsg(
  const char* argFileName,
  AGType::AGWdgIfaceSet* argOutAGWdgIfaceSet /* = NULL */,
  AGType::AGColorMap* argOutColorMap /* = NULL */) // virtual
{
  if (argOutAGWdgIfaceSet)
  {
    *argOutAGWdgIfaceSet = generateGPSet();
  }
  
  if (argOutColorMap)
  {
    *argOutColorMap = generateColorMap();
  }
}
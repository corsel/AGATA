#include "ag-global-param.h"

const int AGGlobalParam::AG_WINDOW_WIDTH = 800;
const int AGGlobalParam::AG_WINDOW_HEIGHT = 600;
std::vector<AGGPIface*> AGGlobalParam::gpVector;
std::map<AGType::AGParam_Uint8, AGType::ColorRGB> AGGlobalParam::colorMap;
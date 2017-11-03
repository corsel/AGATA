#ifndef _GP_DEF_H_INCLUDED
#define _GP_DEF_H_INCLUDED

/*
This file declares definition parameters for widgets.
*/

#include "ag-type.h"

using namespace AGType;

struct AGGP_ArcCircleDef
{
  AGParam_WdgCommon Common;
  AGParam_Int32 PosX;
  AGParam_Int32 PosY;  
  AGParam_Uint8 ColorIndex;
  AGParam_Bool HasHalo;
  AGParam_Bool IsFilled;
  AGParam_Uint8 FillIndex;
  AGParam_Int32 Radius;
  AGParam_Int32 StartAngle;
  AGParam_Int32 EndAngle;
};

struct AGGP_CrownDef
{
  AGParam_WdgCommon Common;
  AGParam_Int32 PosX;
  AGParam_Int32 PosY;
  AGParam_Uint8 ColorIndex;
  AGParam_Bool HasHalo;
  AGParam_Bool IsFilled;
  AGParam_Uint8 FillIndex;
  AGParam_Int32 InnerRadius;
  AGParam_Int32 OuterRadius;
  AGParam_Int32 StartAngle;
  AGParam_Int32 EndAngle;
};

struct AGGP_LineDef
{
  AGParam_WdgCommon Common;
  AGParam_Uint8 ColorIndex;
  AGParam_Bool HasHalo;
  AGParam_Int32 PosXStart;
  AGParam_Int32 PosYStart;
  AGParam_Int32 PosXEnd;
  AGParam_Int32 PosYEnd;
};

#endif // _GP_DEF_H_INCLUDED

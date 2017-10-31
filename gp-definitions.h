#ifndef GP_DEFINITIONS_H_INCLUDED
#define GP_DEFINITIONS_H_INCLUDED

/*
This file declares definition parameters for widgets.
*/

#include "gp-types.h"

struct AGGP_ArcCircleDef
{
  AGParam_Common Common;
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
  AGParam_Common Common;
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
  AGParam_Common Common;
  AGParam_Uint8 ColorIndex;
  AGParam_Bool HasHalo;
  AGParam_Int32 PosXStart;
  AGParam_Int32 PosYStart;
  AGParam_Int32 PosXEnd;
  AGParam_Int32 PosYEnd;
};

#endif // GP_DEFINITIONS_H_INCLUDED

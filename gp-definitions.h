#ifndef GP_DEFINITIONS_H_INCLUDED
#define GP_DEFINITIONS_H_INCLUDED

#include "gp-params.h"

struct AGGP_ArcCircleDef
{
	AGParam_WidgetType WidgetType;
	AGParam_Ident WidgetIdent;
	AGParam_Ident ParentIdent;
	AGParam_Bool IsVisible;
	AGParam_Uint16 StyleSet;
	AGParam_Int32 PosX;
	AGParam_Int32 PosY;	
	AGParam_Bool IsAnonymous;
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
	AGParam_WidgetType WidgetType;
	AGParam_Ident WidgetIdent;
	AGParam_Ident ParentIdent;
	AGParam_Bool IsVisible;
	AGParam_Uint16 StyleSet;
	AGParam_Int32 PosX;
	AGParam_Int32 PosY;
	AGParam_Bool IsAnonymous;
	AGParam_Uint8 ColorIndex;
	AGParam_Bool HasHalo;
	AGParam_Bool IsFilled;
	AGParam_Uint8 FillIndex;
	AGParam_Int32 InnerRadius;
	AGParam_Int32 OuterRadius;
	AGParam_Int32 StartAngle;
	AGParam_Int32 EndAngle;
};

#endif // GP_DEFINITIONS_H_INCLUDED

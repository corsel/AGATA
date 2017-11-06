#ifndef _TYPES_H_INCLUDED
#define _TYPES_H_INCLUDED

/*
This file includes type definitions and data structs used inside ARINC661 commands and widget attributes. 
*/

#include "a661-consts.h"

namespace AGType
{
  typedef unsigned short int AGParam_Ident;
  typedef int AGParam_Int32;
  typedef unsigned char AGParam_Uint8;
  typedef unsigned short int AGParam_Uint16;
  typedef bool AGParam_Bool;
 
  struct AGParam_WdgCommon
  {
    A661Const::A661Constant16Bit WdgType;
    AGParam_Ident WdgIdent;
    AGParam_Ident ParentIdent;
    AGParam_Bool IsVisible;
    AGParam_Uint16 StyleSet;
    AGParam_Bool IsAnonymous;
  };

  struct ColorRGB
  {
    float Red;
    float Green;
    float Blue;
  };
}

#endif // _TYPES_H_INCLUDED


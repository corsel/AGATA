#ifndef _AG_TYPE_H_INCLUDED
#define _AG_TYPE_H_INCLUDED

/*
This file includes type definitions and data structs used inside ARINC661 commands and widget attributes. 
*/

namespace AGType
{
  typedef short int AGParam_Ident;
  typedef int AGParam_Int32;
  typedef unsigned char AGParam_Uint8;
  typedef unsigned short int AGParam_Uint16;
  typedef bool AGParam_Bool;
  
  struct AGParam_WdgCommon
  {
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

#endif // _AG_TYPE_H_INCLUDED


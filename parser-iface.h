#ifndef _PARSER_IFACE_H_INCLUDED
#define _PARSER_IFACE_H_INCLUDED

/*
This file includes parser class for definition files.
Classes will be derived from AGDFParserIface base class to extract graphical primitives from xml of binary definition file. 
*/

#include <fstream>
#include <stdlib.h>
#include "global-params.h"

// Classes derived from this abstract class will parse definition-time xml/binary ARINC661 files.
class AGDFParserIface // abstract
{
public:
  virtual void processDFMsg(
    const char* argFileName, 
    AGType::AGWdgIfaceSet* argOutAGGPIfaceSet = NULL,
    AGType::AGColorMap* argOutColorMap = NULL) = 0;
};

#endif // _PARSER_IFACE_H_INCLUDED

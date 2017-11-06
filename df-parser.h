#ifndef _DF_PARSER_H_INCLUDED
#define _DF_PARSER_H_INCLUDED

/*
This file includes parser class for definition files.
Classes will be derived from AGDFParserIface base class to extract graphical primitives from xml of binary definition file. 
*/

#include <fstream>
#include <stdlib.h>
#include "gp-iface.h"
#include "gp-impn.h"
#include "global-params.h"
#include "types.h"

// Classes derived from this abstract class will parse definition-time xml/binary ARINC661 files.
class AGDFParserIface // abstract
{
public:
  virtual void processDFMsg(
    const char* argFileName, 
    AGType::AGGPIfaceSet* argOutAGGPIfaceSet = NULL,
    AGType::AGColorMap* argOutColorMap = NULL) = 0;
};

// Classes derived from this abstract class will parse definition-time xml/binary ARINC661 files.
class AGRTParserIface // abstract
{
public:
  // TODO: This method will be binded to a stream, socket, etc. instead of char array.
  virtual void processRTMsg(const char* argFileName) = 0;
};

// TODO: Dummy parser class will be removed after actual xml/binary ARINC661 parsers are implemented. 
class AGDFParserDummy : public AGDFParserIface
{
private:
  AGType::AGGPIfaceSet generateGPSet(void);
  AGType::AGColorMap generateColorMap(void);

public:
  AGDFParserDummy(void);
  virtual void AGDFParserDummy::processDFMsg(
    const char* argFileName,
    AGType::AGGPIfaceSet* argOutAGGPIfaceSet = NULL,
    AGType::AGColorMap* argOutColorMap = NULL);
};

#endif // _DF_PARSER_H_INCLUDED

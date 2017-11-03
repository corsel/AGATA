#ifndef _DF_PARSER_H_INCLUDED
#define _DF_PARSER_H_INCLUDED

/*
This file includes parser class for definition files.
Classes will be derived from DFParserIface base class to extract graphical primitives from xml of binary definition file. 
*/

#include <vector>
#include <fstream>
#include <stdlib.h>
#include "gp-iface.h"
#include "gp-impn.h"
#include "ag-type.h"
#include "ag-global-param.h"

class DFParserIface // abstract
{
private:

public:
  virtual void processDF(
    const char* argFileName, 
    std::vector<AGGPIface*>* argOutGPIfaceVector = NULL,
    std::map<AGType::AGParam_Uint8, AGType::ColorRGB>* argOutColorMap = NULL) = 0;
};

// TODO: Dummy parser class will be removed after actual xml/binary ARINC661 parsers are implemented. 
class DFParserDummy : public DFParserIface
{
private:
  std::vector<AGGPIface*> generateGPVector(void);
  std::map<AGType::AGParam_Uint8, AGType::ColorRGB> generateColorMap(void);

public:
  DFParserDummy(void);
  virtual void processDF(
    const char* argFileName,
    std::vector<AGGPIface*>* argOutGPIfaceVector = NULL, 
    std::map<AGType::AGParam_Uint8, AGType::ColorRGB>* argOutColorMap = NULL);
};

#endif // _DF_PARSER_H_INCLUDED

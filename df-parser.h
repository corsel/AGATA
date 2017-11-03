#ifndef DF_PARSER_H_INCLUDED
#define DF_PARSER_H_INCLUDED

/*
This file includes parser class for definition files.
Classes will be derived from DFParserIface base class to extract graphical primitives from xml of binary definition file. 
*/

#include <vector>
#include <fstream>
#include "gp-iface.h"
#include "gp-implementn.h"
#include "gp-types.h"
#include "global-params.h"

class DFParserIface // abstract
{
private:

public:
  virtual std::vector<AGGPIface*> generateGPVector(const char* argFileName) = 0;
};

// Dummy parser class. This will be removed after actual parser classes are implemented.
class DFParserDummy : public DFParserIface
{
private:
public:
  DFParserDummy(void);
  virtual std::vector<AGGPIface*> generateGPVector(const char* argFileName);
};

#endif // DF_PARSER_H_INCLUDED

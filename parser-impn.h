#ifndef _PARSER_IMPN_H_INCLUDED
#define _PARSER_IMPN_H_INCLUDED

#include <fstream>
#include "parser-iface.h"
#include "types.h"
#include "wdg-impn.h"

// TODO: This class is added for testing purposes, it will be removed. 
class AGDFParserDummy : public AGDFParserIface
{
private:
  AGType::AGWdgIfaceSet generateGPSet(void);
  AGType::AGColorMap generateColorMap(void);

public:
  AGDFParserDummy(void);
  virtual void AGDFParserDummy::processDFMsg(
    const char* argFileName,
    AGType::AGWdgIfaceSet* argOutAGWdgIfaceSet = NULL,
    AGType::AGColorMap* argOutColorMap = NULL);
};

class AGDFParserFile : public AGDFParserIface
{
public:
  AGDFParserFile(void);
  virtual void processDFMsg(
    const char* argFileName, 
    AGType::AGWdgIfaceSet* argOutAGWdgIfaceSet = NULL,
    AGType::AGColorMap* argOutColorMap = NULL);
};

#endif // _PARSER_IMPN_H_INCLUDED
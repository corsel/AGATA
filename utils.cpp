#include "utils.h"

using namespace AGUtils;

// AGUtils::Math namespace
float Math::degToRad(float argDeg)
{
  return (argDeg * M_PI / 180.0F);
}
float Math::radToDeg(float argRad)
{
  return (argRad * 180.0F / M_PI);
}
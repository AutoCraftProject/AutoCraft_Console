#ifndef __GENERIC_UTIL_H__
#define __GENERIC_UTIL_H__

#include "head.h"
namespace Util {
    extern std::stringstream _globalStringStream;
    #define _globalSS _globalStringStream
    #define _GSS _globalSS
}

#endif
#ifndef _C_HTTP_UTILS_H_
#define _C_HTTP_UTILS_H_

#include <string>
#include "AccelDefs.h"

class CHttpUtils
{
public:
    static STATUSCODE httpDecode(char* strEncodedAddress, char* buff,
                                 uint32_t buffLen);
    static STATUSCODE httpEncode(char* strAddress, char* buff,
                                  uint32_t buffLen);
}

#endif

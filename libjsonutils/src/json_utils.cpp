#include "jsonutils/json_utils.h"

#include <iostream>

#include <file_utils.h>

namespace jsonutils {
    //Extremely poor regex pattern for matching urls
    constexpr auto URL_PATTERN = "(http|https)://(\\w+\\.)+(\\w)/?(\\w+/{0,1})*";

    int hello() {
        std::cout << "hello,world" << std::endl;
        return 1;
    }


}

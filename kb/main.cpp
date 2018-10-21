#include <iostream>
#include <string>
#include <vector>
#include "absl/strings/str_join.h"
#include "jsonutils/json_utils.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << jsonutils::hello() << std::endl;


    std::vector<std::string> v = {"foo", "bar", "baz"};
    std::string s = absl::StrJoin(v, "-");

    std::cout << "Joined string: " << s << "\n";

    return (0);
}
#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int a = line.find(":") + 2;
    return line.substr(a);
}

std::string log_level(std::string line) {
    // return the log level
    int b = line.find("[") + 1;
    int c = line.find("]") - 1;
    return line.substr(b , c);
}

std::string reformat(std::string line) {
    // return the reformatted message
    int d = line.find(":") + 2;
    int e = line.find("[") + 1;
    int f = line.find("]") - 1;
    return line.substr(d) + " " + "(" + line.substr(e, f) + ")";
}
}  // namespace log_line

#include "file_util.h"
#include "generic_util.h"

namespace Util {
    File::File(std::string path) : input(path.c_str()), output(path.c_str()) {
    }
    File::File(RL loc) : input(RL2Path(loc).c_str()), output(RL2Path(loc).c_str()) {
    }
    std::istream& File::getInput(){
        return input;
    }
    std::ostream& File::getOutput(){
        return output;
    }
    std::string File::getFile(){
        _GSS << input.rdbuf();
        std::string str = _GSS.str();
        _GSS.clear();
        return str;
    }
    void File::close(){
        input.close();
        output.close();
    }
}
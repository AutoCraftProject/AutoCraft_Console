#ifndef __FILE_UTIL_H__
#define __FILE_UTIL_H__

#include "head.h"

namespace Util {
    typedef struct RL {
        std::string id;
        std::string location;
        std::string type;
    }RL;
    inline RL _RLoc(std::string id, std::string loc, std::string tp) {
        return {id, loc, tp};
    }
    inline RL _ALoc(std::string id, std::string loc) {
        return {id, loc, "assets"};
    }
    inline RL _DLoc(std::string id, std::string loc) {
        return {id, loc, "data"};
    }
    inline RL _ACRLoc(std::string id, std::string loc, std::string tp) {
        return {"auto_craft", loc, tp};
    }
    inline RL _ACALoc(std::string loc) {
        return {"auto_craft", loc, "assets"};
    }
    inline RL _ACDLoc(std::string loc) {
        return {"auto_craft", loc, "data"};
    }
    class File {
        std::ifstream input;
        std::ofstream output;
    public:
        File(std::string path);
        File(RL loc);
        std::istream& getInput();
        std::ostream& getOutput();
        std::string getFile();
        void close();
        template<typename T>std::istream& operator>>(T obj) {
            return getInput()>>obj;
        }
        template<typename T>std::ostream& operator<<(T obj) {
            return getOutput()<<obj;
        }
    };
    inline std::string RL2Path(RL loc) {
        return (std::string)"./"+loc.type+"/"+loc.id+"/"+loc.location;
    }
}

#endif
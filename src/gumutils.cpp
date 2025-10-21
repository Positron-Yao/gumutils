#include "gumutils.h"

namespace gumutils {
    std::vector<std::string> choose(std::vector<std::string> const& list, unsigned int limit, std::string const& options) {
        std::string cmd {"gum choose "};
        for (auto i: list) {
            cmd += i + " ";
        }
        cmd += "--limit=" + std::to_string(limit) + " " + options;
        FILE *fp {popen(cmd.c_str(), "r")};
        char buf[1024];
        std::vector<std::string> ret;
        if (fp != nullptr) {
            while (fgets(buf, sizeof buf, fp) != nullptr) {
                // 直接fgets读到的结果是包含换行符的，删掉
                trim_nl(buf);
                if (buf[0]) ret.push_back(buf);
            }
        }
        pclose(fp);
        return ret;
    }
}

char *trim_nl(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    return str;
}

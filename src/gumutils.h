#ifndef GUMUTILS_H
#define GUMUTILS_H
#include <cstdio>
#include <cstring>
#include <sstream>
#include <string>
#include <vector>


namespace gumutils {

enum Alignment {
    Left,
    Right,
    Center
};

std::vector<std::string> choose(std::vector<std::string> const& list, unsigned int limit=1, std::string const& options="");
bool confirm(std::string const& prompt, std::string const& options="");
std::string file(std::string const& directory, std::vector<std::string> const& values);
std::string filter(std::string const& directory, std::vector<std::string> const& values);
std::string format(std::string const& template_str, std::vector<std::string> const& values);
std::string input(std::string const& placeholder, std::vector<std::string> const& values);
std::string join(std::vector<std::string> const& list, Alignment align, std::vector<std::string> const& values);
void pager(std::string const& content, std::vector<std::string> const& values);
void spin();
void style();
void table();
void write();
void log(std::string const& message, std::vector<std::string> const& values);

char *trim_nl(char *str);

} // gumutils

#endif

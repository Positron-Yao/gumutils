#include "gumutils.h"
#include <iostream>
using namespace std;

void choose_example() {
    vector<string> ret {gumutils::choose({"aaa", "bbb", "ccc"}, 2)};
    cout << "Return: total " << ret.size() << endl;
    for (auto i: ret) {
        cout << i << " ";
    }
    cout << endl;
}

void confirm_example() {
    bool ret {gumutils::confirm("Do you want to continue?")};
    cout << "Return: " << (ret ? "YES" : "NO") << endl;
}

void file_example() {
    string ret {gumutils::file(".")};
    cout << "Return: " << ret << endl;
}

void format_example() {
    string ret {gumutils::format("# Hello")};
    cout << "Return: " << endl << ret << endl;
}

void input_example() {
    string ret {gumutils::input("Please Input...")};
    cout << "Return: " << endl << ret << endl;
}

int main(int argc, char** argv) {
    if (!gumutils::init()) {
        return 1;
    }
    cout << "Hello gum!" << endl;
    input_example();
    return 0;
}


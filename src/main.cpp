#include "gumutils.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    cout << "Hello gum!" << endl;
    vector<string> ret {gumutils::choose({"aaa", "bbb", "ccc"}, 2)};
    cout << "Return: total " << ret.size() << endl;
    for (auto i: ret) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}


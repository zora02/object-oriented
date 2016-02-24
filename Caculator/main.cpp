#include <iostream>
#include <string>
#include <queue>
#include <stdlib.h>
#include "Scan.hpp"
#include "Print.hpp"
using namespace std;


int main() {
    string s;
    cin >> s;
    Print :: PrintQueue(Scan :: ToStringQueue(s));
}



#ifndef Scan_hpp
#define Scan_hpp
#include <iostream>
#include <string>
#include <queue>
#include <stdlib.h>
using namespace std;

class Scan
{
    public :
    static bool checkNum(char c);

    static queue<string> ToStringQueue(string s);
    
    queue<string> q;
  
};


#endif /* Scan_hpp */

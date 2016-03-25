#include "Print.hpp"
#include <iostream>
#include <string>
#include <queue>
#include <stdlib.h>
using namespace std;

void Print::PrintQueue(queue<string> q)
{
    while (!q.empty())
    {
        cout << q.front() << endl, q.pop();
    }
};
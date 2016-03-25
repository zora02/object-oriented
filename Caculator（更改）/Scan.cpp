#include "Scan.hpp"
#include <iostream>
#include <string>
#include <queue>
#include <stdlib.h>
using namespace std;

bool Scan::checkNum(char c)
{
    return ('0' <= c && c <= '9') || c == '.'; //判断数字或者是小数点
}
queue<string> Scan::ToStringQueue(string s)
{
    int len = s.size();
    string tem_s;
    queue<string> q;
    for (int i = 0 ; i < len;)
    {
        tem_s.clear();
        if (!checkNum(s[i])) //判断是符号还是数字
        {
            tem_s += s[i++]; //符号
        }
        else
        {
            while (i < len && checkNum(s[i]))
            {
                tem_s += s[i++]; //数字
            }
        }
        if (tem_s.size() > 10)
        {
            cout << "Error" << endl;
            exit(0); //报错
        }
        q.push(tem_s);
    }
    return q;
};

/*
Given a number N >= 0, find its representation in binary.

Example:

if N = 6,

binary form = 110
*/
#include <iostream>
using namespace std;

int main()
{
    int A = 6;
    string s;
    if (A == 0)
    cout<<"0";
    else{
    while (A > 0)
    {
        if (A % 2 == 1)
            s.push_back('1');
        else
            s.push_back('0');

        A = A / 2;
    }
    }

    cout << string(s.rbegin(), s.rend());
}
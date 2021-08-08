#include <iostream>
using namespace std;

int main()
{
    int x = 2147447412;
    /*
    long result = 0;
    while (x != 0)
    {

        int tail = x % 10;
        int newresult = result * 10 + tail;
        if ((newresult - tail) / 10 != result)
        {
            return 0;
        }else{
        result = newresult;
        x = x / 10;
        }
    }
    cout << result;
    */
    string s1 = to_string(x), s2;
    for (int i = s1.size() - 1; i >= 0; i--)
    {
        s2 += s1[i];
    }
    cout << s2 << endl;
    cout << s1 << endl;
    if (s1 == s2)
    {
        cout << 1;
    }
    else
        cout << 0;

 
}
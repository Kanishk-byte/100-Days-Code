#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print all uppercase alphabets with their ASCII values/

int main()
{

    // * My Method
    /*
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch << " : " << (int)ch << endl;
    }
    */

    // * Raghav Sir Method
    int i;
    for (i = 65; i <= 90; i++)
    {
        cout << (char)i << " : " << i << endl;
    }

    return 0;
}
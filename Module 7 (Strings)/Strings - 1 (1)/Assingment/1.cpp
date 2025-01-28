#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (i % 2 != 0)
        {
            str[i] = '#';
        }
    }

    cout << "Updated String : " << str;

    return 0;
}
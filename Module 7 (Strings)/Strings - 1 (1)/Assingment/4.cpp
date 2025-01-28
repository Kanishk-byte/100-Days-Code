#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Input a string of even length and reverse the second half of the string.

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();

    reverse(str.begin() + len / 2, str.end());
    cout << "Reversed String : " << str << endl;

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Reverse the 1st - half of the String (Even Length).

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();
    reverse(str.begin(), str.begin() + len/2);
    cout << "Reversed String : " << str << endl;

    return 0;
}
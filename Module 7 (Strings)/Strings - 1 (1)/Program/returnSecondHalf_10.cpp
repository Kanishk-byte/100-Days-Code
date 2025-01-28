#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Return 2nd - half os a String (Even Length)

int main()
{

    string str;
    cout << "Enter String : ";
    getline(cin, str);

    int len = str.length();
    cout << str.substr(len/2);

    return 0;
}
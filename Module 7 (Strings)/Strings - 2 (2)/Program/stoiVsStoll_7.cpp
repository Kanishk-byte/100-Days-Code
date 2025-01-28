#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : (stoi vs stoll) functions in C++.
// * stoi -> String to Integer
// * stoll -> String to Long Long

int main()
{

    // * stoi
    string str = "123456";
    int x = stoi(str);
    cout << x << endl;

    // * stoll
    string s = "1234567890789";
    long long z = stoll(s);
    cout << s << endl;

    return 0;
}
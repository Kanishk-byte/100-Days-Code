#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Input a string of length less than 10 and convert it into integer without using builtin function.

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    string str = to_string(num);
    cout << "No. of Digits : " << str.length() << endl;

    return 0;
}
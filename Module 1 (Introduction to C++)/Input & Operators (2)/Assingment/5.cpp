#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP to find the difference between ASCII of two characters ,take them as input.

int main()
{

    char ch1;
    cout << "Enter char 1 : ";
    cin >> ch1;

    char ch2;
    cout << "Enter char 2 : ";
    cin >> ch2;

    // int _Ascii_1 = (int)ch1;
    // int _Ascii_2 = (int)ch2;
    // cout << _Ascii_1 << " " << _Ascii_2 << endl;

    int _diffrence = ((int)ch1 - (int)ch2);
    cout << "Diffrence : " << _diffrence;

    return 0;
}
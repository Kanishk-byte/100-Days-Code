#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Take positive integer input & tell if it is divisible by 5 & 3.

int main()
{

    int _num;
    cout << "Enter number : ";
    cin >> _num;

    if (_num % 5 == 0 && _num % 3 == 0)
    {
        cout << "Number is divisible by 5 and 3";
    }
    else
    {
        cout << "Number is not divisible by both";
    }

    return 0;
}
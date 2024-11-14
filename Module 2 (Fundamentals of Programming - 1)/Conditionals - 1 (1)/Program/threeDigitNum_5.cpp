#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP to print a number is 3 - digit or not.

int main()
{

    int _num;
    cout << "Enter number : ";
    cin >> _num;

    if ((_num >= 100) && (_num <= 999))
    {
        cout << "3 - digit number";
    }
    else
    {
        cout << "Not a 3 - digit number";
    }

    return 0;
}
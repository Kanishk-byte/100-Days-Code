#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Take 3 numbers print the greatest of them.

int main()
{

    int _first;
    cout << "Enter first number : ";
    cin >> _first;

    int _second;
    cout << "Enter second number : ";
    cin >> _second;

    int _third;
    cout << "Enter third number : ";
    cin >> _third;

    if (_first > _second)
    {
        if (_first > _third)
        {
            cout << _first << " is greater";
        }
        else
        {
            cout << _third << " is greater";
        }
    }
    else
    {
        if (_second > _third)
        {
            cout << _second << " is greater";
        }
        else
        {
            cout << _third << " is greater";
        }
    }

    return 0;
}
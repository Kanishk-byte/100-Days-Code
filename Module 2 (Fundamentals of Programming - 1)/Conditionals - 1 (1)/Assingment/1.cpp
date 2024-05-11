#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques : Take 2 integers input and print the greatest of them.

int main()
{

    int _first, _second;

    cout << "Enter first number : ";
    cin >> _first;
    cout << "Enter second number : ";
    cin >> _second;

    if (_first > _second)
    {
        cout << _first << " is greater";
    }
    else if (_first == _second)
    {
        cout << "Both are equal";
    }
    else
    {
        cout << _second << " is greater";
    }

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)

int main()
{

    int _year;
    cout << "Enter the year : ";
    cin >> _year;

    if ((_year % 400 == 0) || (_year % 4 == 0 && _year % 100 != 0))
    {
        cout << "It's a leap year";
    }
    else
    {
        cout << "Not a leap year";
    }

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Take input marks of a student and point the grade.

int main()
{

    int _marks;
    cout << "Enter Marks : ";
    cin >> _marks;

    if (_marks > 90 && _marks <= 100)
    {
        cout << "Excellent";
    }

    else if (_marks > 80 && _marks <= 90)
    {
        cout << "Very Good";
    }

    else if (_marks > 70 && _marks <= 80)
    {
        cout << "Good";
    }

    else if (_marks > 60 && _marks <= 70)
    {
        cout << "Can do better";
    }

    else if (_marks > 50 && _marks <= 60)
    {
        cout << "Average";
    }

    else if (_marks >= 40 && _marks <= 50)
    {
        cout << "Below Average";
    }

    else if (_marks < 40)
    {
        cout << "Fail";
    }

    else
    {
        cout << "Invalid Marks";
    }

    return 0;
}
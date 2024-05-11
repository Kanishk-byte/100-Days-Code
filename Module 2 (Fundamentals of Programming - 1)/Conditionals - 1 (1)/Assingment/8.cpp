#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.

int main()
{

    int side1, side2, side3;
    cout << "Enter the sides of triangle : ";
    cin >> side1 >> side2 >> side3;

    if ((side1 == side2) && (side2 == side3))
    {
        cout << "Equilateral Triangle";
    }
    else if ((side1 == side2) || (side2 == side3) || (side3 == side1))
    {
        cout << "Isoscales Triangle";
    }
    else
    {
        cout << "Scaleane Triangle";
    }

    return 0;
}
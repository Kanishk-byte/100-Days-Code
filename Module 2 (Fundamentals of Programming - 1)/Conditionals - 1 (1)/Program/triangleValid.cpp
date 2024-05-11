#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Input three sides and calculate that it can make a valid triangle or not.

int main()
{

    int a, b, c;
    cout << "Enter first side : ";
    cin >> a;
    cout << "Enter second side : ";
    cin >> b;
    cout << "Enter third side : ";
    cin >> c;

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        cout << "Valid Triangle";
    }
    else
    {
        cout << "Invalid Triangle";
    }

    return 0;
}
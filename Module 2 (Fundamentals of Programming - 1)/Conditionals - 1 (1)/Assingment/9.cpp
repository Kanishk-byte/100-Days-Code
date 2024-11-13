#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

int main()
{

    int x, y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "The point is on the origin";
    }
    else if (x != 0 && y == 0)
    {
        cout << "The point lies on the x - axis";
    }
    else if (x == 0 && y != 0)
    {
        cout << "The point lies on the y - axis";
    }
    else if (x != 0 && y != 0)
    {
        cout << "The point is on the plane";
    }
    else
    {
        cout << "Invalid Co - ordinates";
    }

    return 0;
}
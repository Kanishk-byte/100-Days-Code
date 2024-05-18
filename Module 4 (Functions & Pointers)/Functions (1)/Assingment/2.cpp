#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Function that takes the radius of a circle and returns its area.

int area(int r)
{
    float pi = 3.14159;
    float area = (pi * r * r);
    cout << "Area is : " << area;
}

int main()
{

    int r;
    cout << "Enter radius : ";
    cin >> r;

    area(r);

    return 0;
}
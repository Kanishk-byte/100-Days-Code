#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques: WAP to find the circumference of a circle with radius 10 in C++.

int main()
{

    float circumference, pi, radius;

    pi = 3.14;
    radius = 10;
    circumference = (2 * pi * radius);

    cout << "Circumference : " << circumference;

    return 0;
}
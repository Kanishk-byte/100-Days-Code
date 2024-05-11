#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP for finding the volume of the cylinder by taking radius and height as input.
// * Volume of Clyinder = pi * (r * r) * h;

int main()
{

    float pi = 3.14;

    float r;
    cout << "Enter radius : ";
    cin >> r;

    float h;
    cout << "Enter height : ";
    cin >> h;

    float _volume = pi * (r * r) * h;
    cout << "_Volume : " << _volume;

    return 0;
}
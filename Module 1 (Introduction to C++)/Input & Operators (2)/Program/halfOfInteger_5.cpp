#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Take integer input & print half of it.

int main()
{

    int x;
    cout << "Enter integer : ";
    cin >> x;

    float _decimal = (float)x;
    float _half = (_decimal / 2);

    cout << "Half of integer : " << _half << endl;

    return 0;
}
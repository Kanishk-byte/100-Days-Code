#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Find the output for this code. Let input :- 2 3

int main()
{

    int x, y;
    cin >> x >> y;

    x += y;
    x -= y;
    x %= y;

    cout << x;

    return 0;
}
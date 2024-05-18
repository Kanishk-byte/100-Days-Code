#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Derefrence Operator

int main()
{

    int x = 122;
    int *p = &x;
    cout << x << endl;

    *p = 6;
    cout << *p << endl;

    return 0;
}
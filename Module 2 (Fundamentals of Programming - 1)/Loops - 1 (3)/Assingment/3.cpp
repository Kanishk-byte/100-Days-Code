#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Table of n

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    // * My Method
    /*
    for (int i = 1; i <= 10; i++)
    {
        int x = (n * i);
        cout << x << endl;
    }
    */

    // * Raghav Sir Method
    for (int i = n; i <= n * 10; i++)
    {
        if (i % n == 0)
            cout << i << endl;
    }

    return 0;
}
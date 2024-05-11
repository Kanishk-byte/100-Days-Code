#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to print n fibonacci numbers.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int a = 1, b = 1, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        sum = a + b;
        a = b;
        b = sum;
    }

    return 0;
}
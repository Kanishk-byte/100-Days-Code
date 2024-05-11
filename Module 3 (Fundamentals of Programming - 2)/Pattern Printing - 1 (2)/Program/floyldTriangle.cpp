#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Floyld's Triangle
/*
1
2 3
4 5 6
7 8 9 10
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // * Triangle
        {
            cout << a << " "; // * Number
            a++;
        }
        cout << endl;
    }

    return 0;
}
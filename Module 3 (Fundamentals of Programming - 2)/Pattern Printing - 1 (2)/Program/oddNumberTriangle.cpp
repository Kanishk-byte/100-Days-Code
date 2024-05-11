#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Odd Number Triangle
/*
1
1 3
1 3 5
1 3 5 7
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the given pattern.
/*
1
A B
1 2 3
A B C D
1 2 3 4 5
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
                cout << j << " ";
            if (i % 2 == 0)
                cout << char(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}
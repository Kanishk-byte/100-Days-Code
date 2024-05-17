#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Pascal Triangle Optimized

int main()
{

    int row;
    cout << "No. of rows : ";
    cin >> row;

    for (int i = 0; i <= row; i++)
    {
        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << curr << " ";
            curr = curr * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}
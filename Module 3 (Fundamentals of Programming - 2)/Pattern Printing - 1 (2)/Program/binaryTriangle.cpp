#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Binary Triangle
// 1
// 0 1
// 1 0 1 
// 0 1 0 1
// 1 0 1 0 1   

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1" << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to find the largest element of a given 2D - Array of integers.

int main()
{

    int m;
    cout << "Enter no. of Row's : ";
    cin >> m;

    int n;
    cout << "Enter no. of Column's : ";
    cin >> n;

    int arr[m][n];

    // * Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // * Finding largest

    int max = INT_MIN;

    for (int i = 0; i < m; i++) // i is row
    {
        for (int j = 0; j < n; j++) // j is column
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
        cout << endl;
    }

    cout << "Max : " << max;

    return 0;
}
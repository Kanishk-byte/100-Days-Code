#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to find a smallest element in a given 2D - Array.

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

    // * Finding smallest

    int min = INT_MAX;

    for (int i = 0; i < m; i++) // i is row
    {
        for (int j = 0; j < n; j++) // j is column
        {
            if (min > arr[i][j])
                min = arr[i][j];
        }
        cout << endl;
    }

    cout << "Min : " << min;

    return 0;
}
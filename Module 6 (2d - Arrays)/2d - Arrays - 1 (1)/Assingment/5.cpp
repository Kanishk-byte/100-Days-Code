#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a program to print the row number having the maximum sum in a given matrix.

int main()
{

    int m;
    cout << "Enter no. of Row's : ";
    cin >> m;

    int n;
    cout << "Enter no. of Column's : ";
    cin >> n;

    int arr[m][n];

    // Taking Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    int maxSum = INT_MIN;
    int maxRow = -1;

    for (int i = 0; i < m; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < n; j++)
        {
            sumRow += arr[i][j];
        }
        if (sumRow > maxSum)
        {
            maxSum = sumRow;
            maxRow = i;
        }
    }

    cout << "maxSum is : " << maxSum << endl;
    cout << "maxRow is : " << maxRow << endl;

    return 0;
}
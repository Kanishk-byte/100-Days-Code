#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques :

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

    // * Spiral Print
    int minRow = 0, minCol = 0;
    int maxRow = m - 1, maxCol = n - 1;

    while (minRow <= maxRow && minCol <= maxCol)
    {
        // Right
        for (int j = minCol; j <= maxCol; j++)
        {
            cout << arr[minRow][j] << " ";
        }
        minRow++;

        if (minRow > maxRow || minCol > maxCol)
            break;

        // Down
        for (int i = minRow; i <= maxRow; i++)
        {
            cout << arr[i][maxCol] << " ";
        }
        maxCol--;

        if (minRow > maxRow || minCol > maxCol)
            break;

        // Left
        for (int j = maxCol; j >= minCol; j--)
        {
            cout << arr[maxRow][j] << " ";
        }
        maxRow--;

        if (minRow > maxRow || minCol > maxCol)
            break;

        // Up
        for (int i = maxRow; i >= minRow; i--)
        {
            cout << arr[i][minCol] << " ";
        }
        minCol++;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a program to rotate the matrix by 90 degrees anti-clockwise.

int main()
{

    int m;
    cout << "Enter no. of Row's / Column's : ";
    cin >> m;

    int arr[m][m];

    // Taking Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // Print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Transpose
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            // * Swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Reverse Each Column
    for (int k = 0; k < m; k++)
    {
        int i = 0;
        int j = m - 1;
        while (i <= j)
        { // Swapping i,k and j,k
            int temp = arr[i][k];
            arr[i][k] = arr[j][k];
            arr[j][k] = temp;
            i++;
            j--;
        }
    }

    // Print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
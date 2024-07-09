#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to rotate the given matrix by 90' Clockwise.

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

    // Reverse Each Row
    for (int k = 0; k < m; k++)
    {
        int i = 0;
        int j = m - 1;
        while (i <= j)
        { // Swapping k,i and k,j
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
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
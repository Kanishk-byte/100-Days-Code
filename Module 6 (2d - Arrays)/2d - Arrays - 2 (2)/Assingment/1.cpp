#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a program to print the elements of both the diagonals in a square matrix.
// * 1   3
// *   5
// * 7   9

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

    cout<<endl;

    // Star Cross
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || i + j == m - 1)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
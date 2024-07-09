#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
// * [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

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

    // Printing middle row and column
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == m / 2 or j == m / 2)
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
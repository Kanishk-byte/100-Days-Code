#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to add 2 - Matrices.

int main()
{

    int arr[2][3] = {{1, 2, 3}, {3, 4, 5}};
    int sizeArr = sizeof(arr) / sizeof(arr[0][0]);

    int brr[2][3] = {{1, 2, 3}, {3, 4, 5}};
    int sizeBrr = sizeof(brr) / sizeof(brr[0][0]);

    cout << "Size of arr : " << sizeArr << endl;
    cout << "Size of brr : " << sizeBrr << endl;

    /*
    * Method - 1
    int res[2][3];

    if (sizeArr == sizeBrr)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                res[i][j] = arr[i][j] + brr[i][j];
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    */

    /*
    * Method - 2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] + brr[i][j] << " ";
        }
        cout << endl;
    }
    */

    // Method - 3
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            brr[i][j] += arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
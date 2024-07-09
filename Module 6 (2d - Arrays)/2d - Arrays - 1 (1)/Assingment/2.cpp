#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Write a program to add two matrices and save the result in one of the given matrices.

int main()
{

    int m;
    cout << "Enter no. of Row's : ";
    cin >> m;

    int n;
    cout << "Enter no. of Column's : ";
    cin >> n;

    cout << "Enter element's of 1st Matrix : " << endl;

    int arr[m][n];
    // Taking Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter element's of 2nd Matrix : " << endl;

    int brr[m][n];
    // Taking Input
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> brr[i][j];
        }
    }

    cout << "Resultant Matrix : " << endl;

    // Addition
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] += arr[i][j];
        }
    }

    // Printing Addition
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
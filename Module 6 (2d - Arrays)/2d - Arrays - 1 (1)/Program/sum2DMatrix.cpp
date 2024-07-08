#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to find the sum of all the elements of a given 2D - Array.

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

    // * Sum

    int sum = 0;

    for (int i = 0; i < m; i++) // i is row
    {
        for (int j = 0; j < n; j++) // j is column
        {
            sum = sum + arr[i][j];
        }
        cout << endl;
    }

    cout << "Sum : " << sum;

    return 0;
}
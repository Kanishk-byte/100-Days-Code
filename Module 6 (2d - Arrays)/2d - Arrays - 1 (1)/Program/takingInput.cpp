#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Taking 2D - Array input from user.

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

    // * Print
    for (int i = 0; i < m; i++) // i is row
    {
        for (int j = 0; j < n; j++) // j is column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
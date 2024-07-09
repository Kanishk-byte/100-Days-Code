#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

int main()
{

        int m;
        cout << "Enter no. of Row's : ";
        cin >> m;

        int n;
        cout << "Enter no. of Column's : ";
        cin >> n;

        int arr[m][n];

        cout << "Enter element's of Matrix : " << endl;
        // Taking Input
        for (int i = 0; i < m; i++)
        {
                for (int j = 0; j < n; j++)
                {
                        cin >> arr[i][j];
                }
        }

        int l1, r1, l2, r2;
        cout << "Enter the 1st co-ordinate : " << endl;
        cin >> l1 >> r1;
        cout << "Enter the 2nd co-ordinate : " << endl;
        cin >> l2 >> r2;

        int sum = 0;

        // Addition
        for (int i = l1; i < l2; i++)
        {
                for (int j = r1; j < r2; j++)
                {
                        sum += arr[i][j];
                }
        }

        cout << "Resultant Sum : " << sum << endl;

        return 0;
}
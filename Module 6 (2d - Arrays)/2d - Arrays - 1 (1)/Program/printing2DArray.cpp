#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Printing of 2D - Array.

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Rows = 3 idx(0 - 2)
    // Column = 3 idx(0 - 2)

    /*
    * Method - 1
    for(int i = 0; i <= 2; i++){
        cout<<arr[0][i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i <= 2; i++){
        cout<<arr[1][i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i <= 2; i++){
        cout<<arr[2][i]<<" ";
    }
    */

    // * Method - 2
    for (int i = 0; i <= 2; i++) // i is row
    {
        for (int j = 0; j <= 2; j++) // j is column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
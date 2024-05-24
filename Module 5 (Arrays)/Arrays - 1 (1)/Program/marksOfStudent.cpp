#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : If the merks of the student is less than 35 print its index;

int main()
{

    int n;
    cout << "Enter no. of students : ";
    cin >> n;

    int arr[n]; // 0 to (n-1)

    cout << "Enter the marks : ";

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // Output
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < 35)
        {
            cout << "Roll no. : " << i << endl;
        }
    }

    return 0;
}
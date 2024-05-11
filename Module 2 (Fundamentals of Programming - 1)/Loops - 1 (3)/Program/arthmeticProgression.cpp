#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Display this AP = (1,3,5,7,9 . . . n)

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    
    // * Mathematical Formula
    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        cout << i << endl;
    }


    // * Seprate Variable
    // int a = 1; 
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a << endl;
    //     a += 2;
    // }

    return 0;
}
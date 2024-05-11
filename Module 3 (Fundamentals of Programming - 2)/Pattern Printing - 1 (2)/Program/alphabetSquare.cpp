#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Alphabet Square
/*
A B C D
A B C D
A B C D
A B C D
*/

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;
    /*
        * Method - 1
        for (int i = 1; i <= n; i++)
        {
            char ch = 'A';
            for (int j = 1; j <= n; j++)
            {
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
    */

    /*
        * Method - 2
        for (int i = 1; i <= n; i++)
        {
            int ch = 65;
            for (int j = 1; j <= n; j++)
            {
                cout << (char)ch << " ";
                ch++;
            }
            cout << endl;
        }
    */

    // * Raghav Sir Method
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}
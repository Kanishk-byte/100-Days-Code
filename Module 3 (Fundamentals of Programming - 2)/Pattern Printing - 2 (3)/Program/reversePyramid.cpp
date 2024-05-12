#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Reverse Pyramid
// * * * * * * * 
//   * * * * *
//     * * * 
//       * 

int main()
{

    int n;
    cout << "No. of lines : ";
    cin >> n;

    int spaces = 0; // number of spaces initially

    // Loop for each row
    for (int i = n; i >= 1; --i)
    {

        // For Spaces
        for (int j = 0; j < spaces; ++j)
        {
            cout << "  "; // two spaces for each space
        }

        // For Stars
        for (int j = 0; j < 2 * i - 1; ++j)
        {
            cout << "* ";
        }

        cout << endl; // Move to the next line
        spaces++;     // Increment the number of spaces for the next row
    }

    return 0;
}
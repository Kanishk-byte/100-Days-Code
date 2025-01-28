#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Update all the even positions in the string to character 'a'.
// * (Consider 0 - based indexing)

int main()
{

    int n;
    cout << "Enter String Length : ";
    cin >> n;

    char str[n];

    // Input
    cout << "Enter String : ";
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    // Logic
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            str[i] = 'a';
        }
    }

    // Printing
    cout << "Updated String : ";
    cout << str;

    return 0;
}
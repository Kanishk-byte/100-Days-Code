#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Diffrent Ways to print Strings.

int main()
{

    char str[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    // * Normal Method
    for (int i = 0; i < 6; i++)
    {
        cout << str[i] << " "; // a b c d e f
    }

    cout << endl;

    // * Using Null Character
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " "; // a b c d e f
    }

    cout << endl;

    // * Directly Printing
    cout << str; // abcdef

    cout << endl;

    // * Terminating in the Middle
    char str1[] = {'a', 'b', 'c', '\0', 'd', 'e', 'f'};
    cout << str1;

    return 0;
}
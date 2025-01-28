#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Null Character ('\0')

int main()
{

    char ch = '\0'; // Null Character
    cout << ch;     // Gives Nothing Output

    cout << endl;

    char str[] = "abcde"; // * Size -> 6
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }

    cout << endl;

    cout << str[5]; // Nothing Will Print
    // * (Array of Strings store 1 more character to terminate loop)
    // * char str[5] = {'a', 'b', 'c', 'd', 'e', '\0'}

    cout << str[6]; // 0

    return 0;
}
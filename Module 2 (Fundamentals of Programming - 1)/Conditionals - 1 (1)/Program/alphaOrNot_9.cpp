#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP to check wether a character is alphabet or not.

int main()
{

    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if ((((int)ch >= 65) && ((int)ch <= 90)) || (((int)ch >= 97) && ((int)ch <= 122)))
    {
        cout << "Character is Alphabet";
    }
    else
    {
        cout << "Character is not a Alphabet";
    }

    return 0;
}
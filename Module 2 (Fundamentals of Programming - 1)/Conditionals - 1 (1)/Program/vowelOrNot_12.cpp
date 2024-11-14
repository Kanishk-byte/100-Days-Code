#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP to check a given character is vowel or not.

int main()
{

    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if (((int)ch >= 97) && ((int)ch <= 122))
    {
        if (((int)ch == 97) || ((int)ch == 101) || ((int)ch == 105) || ((int)ch == 111) || ((int)ch == 117)){
            cout<<"Vowel";
        }
        else{
            cout<<"Not a Vowel";
        }
    }

    return 0;
}

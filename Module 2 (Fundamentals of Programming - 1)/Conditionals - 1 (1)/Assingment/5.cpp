#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques : Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

int main()
{

    char ch;
    cout << "Enter char : ";
    cin >> ch;

    int _ascii = (int)ch;

    if ((_ascii >= 65 && _ascii <= 90) || (_ascii >= 97 && _ascii <= 122))
    {
        cout << "Character is Alphabet";
    }
    else if ((_ascii >= 33 && _ascii <= 47))
    {
        cout << "Special Character";
    }
    else if ((_ascii >= 48 && _ascii <= 57))
    {
        cout << "Digit";
    }
    else
    {
        cout << "Invalid Character";
    }

    return 0;
}
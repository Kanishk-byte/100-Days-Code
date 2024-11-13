#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Print the serial number of the Alphabet.

int main()
{

    cout << "!!Alert : Only Capital Alphabet's Allowed!!" << endl;

    char ch;
    cout << "Enter character : ";
    cin >> ch;

    int ascii_value = (int)ch;
    cout << "ASCII_value : " << ascii_value << endl;

    int serial_number = (ascii_value - 64);
    cout << "Serial_number : " << serial_number << endl;

    return 0;
}
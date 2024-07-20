#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Write a program to count the minimum number of notes in a given amount using the switch statement

int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes500 = 0, notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes5 = 0, notes2 = 0, notes1 = 0;

    switch (amount >= 500)
    {
    case 1:
        notes500 = amount / 500;
        amount %= 500;
    }
    switch (amount >= 100)
    {
    case 1:
        notes100 = amount / 100;
        amount %= 100;
    }
    switch (amount >= 50)
    {
    case 1:
        notes50 = amount / 50;
        amount %= 50;
    }
    switch (amount >= 20)
    {
    case 1:
        notes20 = amount / 20;
        amount %= 20;
    }
    switch (amount >= 10)
    {
    case 1:
        notes10 = amount / 10;
        amount %= 10;
    }
    switch (amount >= 5)
    {
    case 1:
        notes5 = amount / 5;
        amount %= 5;
    }
    switch (amount >= 2)
    {
    case 1:
        notes2 = amount / 2;
        amount %= 2;
    }
    switch (amount >= 1)
    {
    case 1:
        notes1 = amount;
    }

    if (notes500 > 0)
        cout << "Notes of 500: " << notes500 << endl;
    if (notes100 > 0)
        cout << "Notes of 100: " << notes100 << endl;
    if (notes50 > 0)
        cout << "Notes of 50: " << notes50 << endl;
    if (notes20 > 0)
        cout << "Notes of 20: " << notes20 << endl;
    if (notes10 > 0)
        cout << "Notes of 10: " << notes10 << endl;
    if (notes5 > 0)
        cout << "Notes of 5: " << notes5 << endl;
    if (notes2 > 0)
        cout << "Notes of 2: " << notes2 << endl;
    if (notes1 > 0)
        cout << "Notes of 1: " << notes1 << endl;

    return 0;
}

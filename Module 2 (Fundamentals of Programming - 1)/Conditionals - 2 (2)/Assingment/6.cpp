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
    cout << "Enter the Amount : ";
    cin >> amount;

    int n500, n200, n100, n50, n20, n10, c5, c2, c1;
    n500 = n200 = n100 = n50 = n20 = n10 = c5 = c2 = c1;

    switch (amount >= n500)
    {
    case 1:
        n500 = amount / 500;
        amount %= 500;
    }

    switch (amount >= n200)
    {
    case 1:
        n200 = amount / 200;
        amount %= 200;
    }

    switch (amount >= n100)
    {
    case 1:
        n100 = amount / 100;
        amount %= 100;
    }

    switch (amount >= n50)
    {
    case 1:
        n50 = amount / 50;
        amount %= 50;
    }

    switch (amount >= n20)
    {
    case 1:
        n20 = amount / 20;
        amount %= 20;
    }

    switch (amount >= n10)
    {
    case 1:
        n10 = amount / 10;
        amount %= 10;
    }

    switch (amount >= c5)
    {
    case 1:
        c5 = amount / 5;
        amount %= 5;
    }

    switch (amount >= c2)
    {
    case 1:
        c2 = amount / 2;
        amount %= 2;
    }

    switch (amount >= c1)
    {
    case 1:
        c1 = amount / 1;
        amount %= 1;
    }

    if (n500 > 0)
        cout << "Notes of 500 : " << n500 << endl;

    if (n200 > 0)
        cout << "Notes of 200 : " << n200 << endl;

    if (n100 > 0)
        cout << "Notes of 100 : " << n100 << endl;

    if (n50 > 0)
        cout << "Notes of 50 : " << n50 << endl;

    if (n20 > 0)
        cout << "Notes of 20 : " << n20 << endl;

    if (n10 > 0)
        cout << "Notes of 10 : " << n10 << endl;

    if (c5 > 0)
        cout << "Coins of 5 : " << c5 << endl;

    if (c2 > 0)
        cout << "Coins of 2 : " << c2 << endl;

    if (c1 > 0)
        cout << "Coins of 1 : " << c1 << endl;

    return 0;
}

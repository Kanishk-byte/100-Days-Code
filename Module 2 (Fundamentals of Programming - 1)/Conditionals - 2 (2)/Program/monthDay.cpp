#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP to print number of days in a particular month.

int main()
{

    int x;
    cout << "Enter month number : ";
    cin >> x;

    switch ((x == 1) || (x == 3) || (x == 5) || (x == 7) || (x == 8) || (x == 10) || (x == 12))
    {
    case 1:
        cout << "31 days";
        break;
    }

    switch ((x == 4) || (x == 6) || (x == 9) || (x == 11))
    {
    case 1:
        cout << "30 days";
        break;
    }

    switch (x == 2)
    {
    case 1:
        cout << "28 days";
        break;
    }

    return 0;
}
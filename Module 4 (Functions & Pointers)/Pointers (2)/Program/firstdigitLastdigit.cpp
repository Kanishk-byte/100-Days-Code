#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Firstdigit & Lastdigit of a number.

void find(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n % 10; // Lastdigit
    while (n > 9)
    { // Firststdigit
        n /= 10;
    }
    *ptr1 = n;
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int firstDigit, lastDigit;

    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;

    find(n, ptr1, ptr2);

    cout << "Firstdigit : " << firstDigit << endl;
    cout << "Lastdigit : " << lastDigit << endl;

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Check weather a number is composite or not.
// * Composite number -> A number which is has 1 or more than 1 factor other than 1 or number itself.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    bool flag = true; // * Prime Number

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false; // * Composite Number
            break;
        }
    }

    if (n == 1)
        cout << n << " is Neither Prime nor Composite" << endl;
    else if (flag == true)
        cout << n << " is Prime Number" << endl;
    else
        cout << n << " is Composite Number" << endl;

    return 0;
}
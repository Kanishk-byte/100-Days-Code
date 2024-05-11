#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to sum of a given number and its reverse.

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int lastdigit = 0;
    int reverse = 0;
    int temp = n;

    while (n > 0)
    {
        reverse = reverse * 10;
        lastdigit = n % 10;
        reverse = reverse + lastdigit;
        n = n / 10;
    }

    cout << "Reverse is : " << reverse<<endl;

    cout<<"Result is : "<<(temp + reverse);

    return 0;
}
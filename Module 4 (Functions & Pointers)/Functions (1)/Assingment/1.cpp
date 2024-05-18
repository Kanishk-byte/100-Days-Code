#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Function to print squares of first n natural numbers

void square(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Square is " << i << " is : " << (i * i) << endl;
    }
}

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    square(n);

    return 0;
}
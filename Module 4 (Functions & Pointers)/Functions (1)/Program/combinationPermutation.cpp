#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Combination & Permutation using functions.

int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int r;
    cout << "Enter r : ";
    cin >> r;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);

    // * nCr
    int nCr = (nfact / (rfact * nrfact));
    cout << "nCr is : " << nCr << endl;

    // * nPr
    int nPr = (nfact / nrfact);
    cout << "nPr is : " << nPr << endl;

    return 0;
}
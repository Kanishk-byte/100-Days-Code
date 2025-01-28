#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print the factorials of first ‘n’ numbers

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int _fact = 1;
    for (int i = 1; i <= n; i++)
    {
        _fact = _fact * i;
        cout << i << " : " << _fact << endl;
    }

    return 0;
}
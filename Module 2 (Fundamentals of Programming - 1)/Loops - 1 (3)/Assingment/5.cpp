#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Display this GP = (3,12,48, . . . n)

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a *= 4;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Display this GP = (1,2,4,8,16,32 . . . n)

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a *= 2;
    }

    return 0;
}
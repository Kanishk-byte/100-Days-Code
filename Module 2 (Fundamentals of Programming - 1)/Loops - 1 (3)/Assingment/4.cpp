#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Display this AP = (4,7,10,13,16, . . . n)

int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a += 3;
    }

    return 0;
}

#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Print "Hello World n times"
int main()
{

    int n;
    cout << "Enter n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Hello World!" << endl;
    }

    // * Outside loop value of 'i' is (n + 1)

    return 0;
}
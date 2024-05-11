#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : While Loop (Alternate to while loop), used for complicated conditions
/*
int main()
{

    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}
*/

// * Ques : Predict the Output
/*
int main()
{

    int i; // * When value is not initialized compiler will give garbage value.
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}
*/

// * Ques : Predict the Output

int main()
{

    int i = 1; // * Compiler gives 0
    while (i == 1)
    {
        i -= 1;
        cout << i << endl;
    }

    return 0;
}

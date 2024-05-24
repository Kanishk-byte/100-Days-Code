#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Taking input & Printing

int main()
{

    int array[7] = {4, 6, 7, 9, 2, 5, 0};

    // * Input
    for (int i = 0; i <= 6; i++)
    {
        cin >> array[i];
    }

    // * Output
    for (int i = 0; i <= 6; i++)
    {
        cout << array[i] << "\t";
    }

    return 0;
}
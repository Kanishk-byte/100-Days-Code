#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

int main()
{

    vector<int> v;

    int size = v.size();
    cout << "Enter size : ";
    cin >> size;

    cout << "Enter elements : " << endl;

    for (int i = 0; i < size; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + v[i];
        }
        if (i % 2 != 0)
        {
            sumOdd = sumOdd + v[i];
        }
    }

    cout << "Even sum : " << sumEven << endl;
    cout << "Odd sum : " << sumOdd << endl;

    int diffrence = (sumEven - sumOdd);

    if (diffrence >= 0)
    {
        cout << "Diffrence is : " << diffrence;
    }
    else
    {
        cout << "Diffrence is : " << -(diffrence);
    }

    return 0;
}
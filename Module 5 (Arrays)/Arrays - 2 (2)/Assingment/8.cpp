#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Find the error

double getAverage(int arr[], int size);

int main()
{
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // avg = getAverage(balance[0], 5);
    avg = getAverage(balance, 5);
    cout << "Average value is : " << avg << endl;

    // In the call to getAverage, the first element of the array is passed instead of the entire array.

    return 0;
}
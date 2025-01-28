#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Passing Array to Functions.
// * Pass by Refrence.
/*
 * Accessing the elements of Array in another function.
 * Updation in Array (Pass by Value / Pass by Reference)
 */

void display(int arr1[], int size) // Same Array
{
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << "\t";
    }
    cout << endl;
}

void change(int arr2[], int size) // Same Array
{
    arr2[0] = 6;
}

int main()
{

    int array[] = {4, 2, 7, 8, 4};
    int size = sizeof(array) / sizeof(array[0]);

    display(array, size);
    change(array, size);
    display(array, size);

    return 0;
}
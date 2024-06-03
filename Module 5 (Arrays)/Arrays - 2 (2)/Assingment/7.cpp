#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : If an array arr contains n elements, then check if the given array is a palindrome or not.

int main()
{

    vector<int> v;

    int size = v.size();
    cout << "Enter size : ";
    cin >> size;

    cout << "Enter elements : ";

    for (int i = 0; i < size; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }

    /*
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        if (v[i] == v[j])
        {
            cout << "Array is Palindrome" << endl;
        }
        break;
    }
    */

    int i = 0;
    int j = v.size() - 1;

    bool flag = false;

    while (i <= j)
    {
        if (v[i] == v[j])
        {
            flag = true;
        }
        break;
        i++;
        j--;
    }

    if (flag == true)
    {
        cout << "Array is Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
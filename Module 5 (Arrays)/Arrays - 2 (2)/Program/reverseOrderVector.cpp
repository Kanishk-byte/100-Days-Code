#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : WAP to copy the elements of one array into another

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v1;

    int size = v1.size();
    cout << "Enter size : ";
    cin >> size;

    cout << "Enter elements : " << endl;

    for (int i = 0; i < size; i++)
    {
        int elem;
        cin >> elem;
        v1.push_back(elem);
    }

    vector<int> v2(size);

    for (int i = 0; i < size; i++)
    {
        // i + j = size - 1;
        int j = size - 1 - i;
        v2[i] = v1[j];
    }

    display(v2);

    return 0;
}
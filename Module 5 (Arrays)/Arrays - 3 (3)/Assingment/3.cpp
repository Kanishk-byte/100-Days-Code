#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

// * Ques : Find the first non-repeating element in the array.

void firstNonRepeating(vector<int> &a, int n)
{
    unordered_map<int, int> frequency;

    // Calculate frequency of each element
    for (int i = 0; i < n; i++)
    {
        frequency[a[i]]++;
    }

    // Find the first non-repeating element
    for (int i = 0; i < n; i++)
    {
        if (frequency[a[i]] == 1)
        {
            cout << a[i] << " is the first non-repeating element." << endl;
            return;
        }
    }

    cout << "There is no non-repeating element in the array" << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    firstNonRepeating(a, n);

    return 0;
}

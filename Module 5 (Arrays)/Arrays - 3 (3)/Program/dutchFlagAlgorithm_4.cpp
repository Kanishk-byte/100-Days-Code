#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : Dutch Flag Algorithm (One Pass Solution)

void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        v.push_back(elem);
    }
}

void display(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void dutchFlagAlgo(vector<int> &v, int n)
{

    int low = 0;
    int mid = 0;
    int high = v.size() - 1;

    /*
    * Conditions :)

    -> Mid ke barre mai soche;
    -> 0 to (low - 1) -> 0;
    -> (high + 1) to end -> 2;
    -> low to (mid - 1) -> 1;
    */

    while (mid <= high)
    {

        if (v[mid] == 2) // * (Mid - High) :- Swapping
        { 
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }

        else if (v[mid] == 0) // * (Mid - Low) :- Swapping
        { 
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }

        else
        {
            mid++;
        }
    }
}

int main()
{

    vector<int> v;

    int n = v.size();
    cout << "Enter Vector Size : ";
    cin >> n;

    cout << "Enter Vector Elements (0,1,2) : ";
    input(v, n);

    cout << "Unsorted Vector : ";
    display(v, n);

    // * Sorting Vector :-
    dutchFlagAlgo(v, n);
    cout << endl;

    cout << "Sorted Vector : ";
    display(v, n);

    return 0;
}
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : 2D - Vector's (Vector of Vector's)

int main()
{

    vector<int> v1; // 1 2 3
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2; // 4 5
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3; // 6 7 8 9 10
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    vector<vector<int>> v; // {{1, 2, 3}, {4, 5}, {6, 7, 8, 9, 10}};

    // v.push_back(7) -> This will give error because we can't insert an integer in to 2D - Vector.
    v.push_back(v1); // Inserting whole Vector
    v.push_back(v2); // Inserting whole Vector
    v.push_back(v3); // Inserting whole Vector

    cout << v[0][2]; // 3
    cout << v[0][3]; // 0 (It will give value 0, because we are doing push_back in vector)

    return 0;
}
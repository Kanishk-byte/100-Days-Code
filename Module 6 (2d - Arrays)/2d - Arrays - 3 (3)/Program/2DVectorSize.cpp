#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

// * Ques : 2D - Vector into Function

void length2DVector(vector<vector<int>> &v)
{
    cout << v.size(); // This will give no. of Vector's inserted in 2D - Vector.
}

void length2DVectorInsideVector(vector<vector<int>> &v)
{
    cout << v[0].size() << endl; // This will give the length of Vector's inserted in 2D - Vector.
    cout << v[1].size() << endl; // This will give the length of Vector's inserted in 2D - Vector.
    cout << v[2].size() << endl; // This will give the length of Vector's inserted in 2D - Vector.
}

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

    v.push_back(v1); // Inserting whole Vector
    v.push_back(v2); // Inserting whole Vector
    v.push_back(v3); // Inserting whole Vector

    length2DVector(v);
    cout << endl;
    length2DVectorInsideVector(v);

    return 0;
}
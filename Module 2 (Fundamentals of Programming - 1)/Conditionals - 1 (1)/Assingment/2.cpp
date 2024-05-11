#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.

int main()
{

    float _radius, _area, _circumference;

    cout << "Enter radius : ";
    cin >> _radius;

    _area = ((3.14) * _radius * _radius);
    _circumference = (2 * (3.14) * _radius);

    cout << "Area is : " << _area << endl;
    cout << "Circumference is : " << _circumference << endl;

    if (_area > _circumference)
    {
        cout << _area << " is greater";
    }
    else if (_area == _circumference)
    {
        cout << "Both are equal";
    }
    else
    {
        cout << _circumference << " is greater";
    }

    return 0;
}
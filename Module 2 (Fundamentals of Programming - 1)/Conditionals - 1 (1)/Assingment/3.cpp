#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * #include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.

// * Area of Rectangle = length * breadth
// * Perimeter of Rectangle = 2 * (length + breadth)

int main()
{

    float _length, _breadth, _area, _perimeter;

    cout << "Enter length : ";
    cin >> _length;

    cout << "Enter brea_breadth : ";
    cin >> _breadth;

    _area = (_length * _breadth);
    _perimeter = 2 * (_length + _breadth);

    cout << "Area is : " << _area << endl;
    cout << "Circumference is : " << _perimeter << endl;

    if (_area > _perimeter)
    {
        cout << _area << " is greater";
    }
    else if (_area == _perimeter)
    {
        cout << "Both are equal";
    }
    else
    {
        cout << _perimeter << " is greater";
    }

    return 0;
}
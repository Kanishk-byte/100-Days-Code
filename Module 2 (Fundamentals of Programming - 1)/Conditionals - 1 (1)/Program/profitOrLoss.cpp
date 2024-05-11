#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// * WAP to determine profit or loss also determine how much ?

int main()
{

    int cost_price;
    cout << "Enter Cost_Price : ";
    cin >> cost_price;

    int selling_price;
    cout << "Enter Selling_Price : ";
    cin >> selling_price;

    int loss = (cost_price - selling_price);
    int profit = (selling_price - cost_price);

    if (cost_price > selling_price)
    {
        cout << "Seller made loss of : " << loss;
    }
    else if (selling_price > cost_price)
    {
        cout << "Seller made profit of : " << profit;
    }
    else
    {
        cout << "No Profit No Loss";
    }

    return 0;
}
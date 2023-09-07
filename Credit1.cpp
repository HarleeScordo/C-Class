#include <iostream>
using namespace std;

int main() 

{
    int color;
    double cost;
    string type;

    cout << "Enter coupon color (0 = no coupon, 1 = green, 2 = blue): ";
    cin >> color;

    cout << "Enter the type of haircut (Adult or Kids): ";
    cin >> type;


    if (type == "Adult")
    {
        cost = 15.50;
        if (color == 1)
        {
            cost -= 3.50;
        }
        else if (color == 2)
        {
            cost -= 2.59;
        }
    }
    else if (type == "Kids")
    {
        cost = 10.50;
        if (color == 1)
        {
            cost -= 2.50;
        }
        else if (color == 2)
        {
            cost -= 1.50;
        }
    }
   
    cout << "The amount is " << cost;

    return 0;
}
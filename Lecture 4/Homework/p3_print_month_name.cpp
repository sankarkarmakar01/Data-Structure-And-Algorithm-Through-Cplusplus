// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number(1-12): ";
    cin >> n;
    if (n >= 1 && n <= 12)
    {
        if (n == 1)
        {
            cout << "January";
        }
        else if (n == 2)
        {
            cout << "February";
        }
        else if (n == 3)
        {
            cout << "Merch";
        }
        else if (n == 4)
        {
            cout << "April";
        }
        else if (n == 5)
        {
            cout << "May";
        }
        else if (n == 6)
        {
            cout << "June";
        }
        else if (n == 7)
        {
            cout << "July";
        }
        else if (n == 8)
        {
            cout << "August";
        }
        else if (n == 9)
        {
            cout << "Septmeber";
        }
        else if (n == 10)
        {
            cout << "October";
        }
        else if (n == 11)
        {
            cout << "November";
        }
        else if (n == 12)
        {
            cout << "December";
        }
    }
    else
    {
        cout << "Enter valid input";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter the day number(1-7):";
    cin >> day;
    if (day == 1)
    {
        cout << "Sunday";
    }
    else if (day == 2)
    {
        cout << "Monday";
    }
    else if (day == 3)
    {
        cout << "Tuesday";
    }
    else if (day == 4)
    {
        cout << "Wednesday";
    }
    else if (day == 5)
    {
        cout << "Thursday";
    }
    else if (day == 6)
    {
        cout << "Friday";
    }
    else if (day == 7)
    {
        cout << "Saturday";
    }
    else
    {
        cout << "Please enter a valid input...";
    }
    return 0;
}
//*     A
//*    AB
//*   ABC
//*  ABCD
//* ABCDE

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        for (char j = 'A'; j <= 'A' + (i - 1); j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n'th number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i * i << " ";
    }
    return 0;
}
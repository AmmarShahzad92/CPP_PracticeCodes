#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter first number: ";
    cin >> n1;
    cout << "enter second number: ";
    cin >> n2;
    cout << "Even numbers in the specified range are: ";
    if (n1 < n2)
    {
        for (int i = n1; i <= n2; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }
    else if (n1 > n2)
    {
        for (int i = n2; i <= n1; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
    }
    else
    {
        if (n1 % 2 == 0)
        {
            cout << "both input numbers are same and even" << endl;
        }
        else
        {
            cout << "both input numbers are same yet not even" << endl;
        }
    }
    return 0;
}

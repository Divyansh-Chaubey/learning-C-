#include <iostream>
using namespace std;
int main()
{
    // int A, a, b, c, d, sum;
    int A,a,d,sum;
    cout << "enter a number in between 1000 & 9999 \n";
    cin >> A;

    if (A >= 1000 && A < 9999)
    {
        a = A / 1000;
        // b = (A % 1000);
        // c = A / 100;
        // b = b % 100;
        d = A % 10;
        sum = a + d;
        if (sum % 2 == 0)
        {
            cout << a - d;
        }
        else
        {
            cout << a * d;
        }
    }
    else 
    cout<<"invalid input";

    return 0;
}
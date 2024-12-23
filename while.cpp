#include <iostream>
using namespace std;
int main()
{
    int num, rv = 0;
    cout << "enter a number";
    cin >> num;
    int ori = num;
    //   for(int i=num;num!=0;num=num/10)
    while (num != 0)
    {
        rv = rv * 10 + num % 10;
        num = num / 10;
    }
    if (ori == rv)
    {
        cout << rv << "  is a palindrome";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
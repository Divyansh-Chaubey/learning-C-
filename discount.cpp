#include <iostream>
using namespace std;
int main()
{
    int bill, d, dis;
    cout << "enter the billing cost of your purchaes ";
    cin >> bill;

    if (bill < 501 && bill > 0)
    {
        d = 5;
        dis = bill - (bill * d / 100);
        cout << "total amount you have to pay aftr discount of 5%  :" << dis;
    }
    else if (bill < 3000 && bill > 1000)
    {
        d = 10;
        dis = bill - (bill * d / 100);
        cout << "total amount you have to pay aftr discount of 2%  :" << dis;
    }
    else if (bill < 1000 && bill > 500)
    {
        d = 2;
        dis = bill - (bill * d / 100);
        cout << "total amount you have to pay aftr discount of 10% :" << dis;
    }
    else
    {
        cout << "no discount , trhanks for visiting";
    }
    return 0;
}
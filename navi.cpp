#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "select your routs\n";
    cin >> n;
    if (n == 1)
    {
        cout << "select your next destination\n no of selection you have 4. \n";
        cin >> n;
        if (n == 4)
        {
            cout << "you have reached your destination \n";
        }
        else if (n == 3)
        {
            cout << "select your next destination \n no. of selection you have 2.";
            cin >> n;
            if (n == 4)
            {
                cout << "you have reached your destination \n";
            }
            else if (n == 2)
            {
                cout << " select your next destination \n no. of selection you have 1.\n";
                if (n == 4)
                {
                    cout << "you have reached your destination \n";
                }
                else
                {
                    cout << "ir \n";
                }
            }

            else
            {
                cout << "ir \n";
            }
        }
        else if (n == 2)
        {
            cout << "you have reached your destination \n";
            cin >> n;
            if (n == 4)
            {
                cout << "you have reached your destination \n";
            }

            else if (n == 3)
            {
                cout << "select your next destination \n no. of selection you have 1.\n";
                cin >> n;
                if (n == 4)
                {
                    cout << "you have reached your destination \n";
                }
                else
                {
                    cout << " ir";
                }
            }

            else
            {
                cout << "ir \n";
            }
        }
        else
        {
            cout << "ir \n";
        }
    }
    return 0;
}
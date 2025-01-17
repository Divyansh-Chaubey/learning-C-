#include <iostream>
using namespace std;

void bp(string arr)
{
    int n = arr.length(), count = 0;
    int i = 0;

    while (i < n)
    {
        if (arr[i] == '[' || arr[i] == '{' || arr[i] == '(')
        {
            ++count;
        }

        else if (arr[i] == ']' || arr[i] == '}' || arr[i] == ')')
        {
            --count;
        }

        ++i;
    }
    cout << count;
    if (count!=0)
    cout<<" \nnot balanced";
}

int main()
{
    string a = "[{(()}]";
    bp(a);
    return 0;
}
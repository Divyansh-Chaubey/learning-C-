# include<iostream>
using namespace std;
int main()
{
    int n ,fac=1;

    cout<< "enter a number ";
    cin >>n;
    for (int i=1;i<=n;i++){
       fac=fac*i;
    }
    cout <<fac;
    return 0;
}
# include<iostream>
using namespace std;
int main()
{
    int a,b=0;
    cin>>a;
    b=a%10;
    a=a/10;
    b+=a%10;
    a=a/10;
    b+=a%10;
    cout<<b; 

    return 0;
}
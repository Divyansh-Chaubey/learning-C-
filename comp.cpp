# include<iostream>
using namespace std;
int main()
{
    
    // int A=456;
    int a=1, b=2, c=4 ,d;
    cin >>d;
    // a=A/100;
    // b=(A%100);
    // c= A/10;
    // b=b%10;

    // if(a>b&&a>c)
    // cout<<"a is greater than b and c";
    // else if(b>c)
    // cout<<"b is greater ";
    // else
    // cout<<"c is greater"; 
    // return 0;


    if(d==2)
    {
        a+=d;
        b=a-b;
        a=a-b;
        cout<<a<<b;
    }

    else if(d==3)
    {
         a=a+b+c;
         b=a-c-b;
         c=a-b-c;
         a=a-b-c;
         cout<<a<<b<<c;
    }


    else 
    cout<<"invalid input";
}
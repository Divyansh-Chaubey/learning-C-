# include<iostream>
using namespace std;
int febo(int sum){
    if (sum==0||sum==1)
    return 1;
    else 
    return febo(sum-1)+febo(sum-2);
}


int main()
{
    int a;
    cout<<"enter the term you want to print";
    cin>>a;
    cout<<febo(a);
    return 0;
}
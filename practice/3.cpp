# include<iostream>
using namespace std;
int main()
{
    int n,sum=0 ,i=1;
    cout<<"enter a number";
    cin >>n;
    while(i<=n){
        sum=sum+i;
        ++i;
        cout <<sum <<"\t"<<i<<endl;
    }
    cout <<sum;
    return 0;
}

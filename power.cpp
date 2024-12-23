# include<iostream>
using namespace std;
int main()
{
    int e=2,term =1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        term*=e;
    }
    cout<<term;
    return 0;
}
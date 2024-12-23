# include<iostream>
using namespace std;
int main()
{
    int a=1,n=5,r=3,term,pow=1;

    for(int i=1;i<=n;++i)
    {
       cout <<(term=a*pow)<<"\n";
       for(int j=0;j<i;j++);
         {
              pow=pow*r;
         }
    }

    return 0;
}


# include<iostream>
using namespace std;
int main()
{
    int n=1,term,d=2 ,sum;
   
    cout<<"enter the number of terms you want to print";
    cin>> term;
    for(int i=0;i<term;++i)
    {
      sum=n+(i*d);
      cout<<sum<<endl;
    }
    
    return 0;
}
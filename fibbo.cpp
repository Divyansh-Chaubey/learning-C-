# include<iostream>
using namespace std;
int main()
{
    int a=0,b=1 ,next;
    int n;
    cout<<"enter the number of term you want to print ";
    cin>>n;

    for(int i=0;i<n;i++)
    {

        if(i==0){
            cout<<a<<endl;
            continue;
        }
        else if(i==1)
        {
          cout<<b<<endl;
          continue;
        }
        else{
        cout<<a<<endl;
        cout<<(next=a+b)<<endl;
        a=b;
        b=next;
        }
    }
    return 0;
}
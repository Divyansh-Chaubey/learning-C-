# include<iostream>
using namespace std;
int main()
{
    int number=2;
    for(int i=1;i<=10;++i)
    {
        cout<<number*i<<endl;
        if( i==10){
            cout<<endl;
            ++number;
            i=0;
            if(number==10)
            {
                return 0;
            }
        }
    }
    return 0;
}
# include<iostream>
using namespace std;
int main()
{
    int start,end,i=start;
    cout <<"enter the range form where you want to calculate start and end ";
    cin>>start>>end;
    while (start<end){
        if (start%3==0&&start%5==0)
        {
            cout <<start<<endl;
        }
        start++;
    }
    
    return 0;

}
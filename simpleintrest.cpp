# include<iostream>
using namespace std;
int main()
{
    float pri,time,ROI ,SI;
    cout<<"enter the principal,time &rate of intrest";
    cin>>pri>>time>>ROI;
    SI=(pri*time*ROI)/100;
    cout<<SI;
    return 0;
}
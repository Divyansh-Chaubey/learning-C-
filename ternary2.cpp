# include<iostream>
using namespace std;
int main()
{
    int pass;
    // password is=12345
    cout<<"enter your password";
    cin>>pass;
    (pass==12345)?cout<<"open":(cout<<"try again",cin>>pass,(pass==12345)?cout<<"open":(cout<<"wrong pasword try again",cin>>pass,(pass==0)?cout<<"open":cout<<"try after 30sec"));
    
    return 0;
}
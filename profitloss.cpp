# include<iostream>
using namespace std;
int main()
{
    int mrp=1000,d=10 ,sp ,cp=700;
    sp=mrp-(mrp*d/100);
    if(sp>cp)
    {
        cout<<"profit :"<<  sp-cp;
    }
    else
    {
        cout<<"loss :"<<cp-sp;
    }
    return 0;
}
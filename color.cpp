# include<iostream>
using namespace std;
int main()
{
    int color1,color2;
    cout<<"enter the 1st color";
    cout<<"\n enter the second color";
    cin>> color1>>color2;

    // the value of pink color is 5
    if (color1+color2==5)
    {
        cout<<"your color is ready";
    }

    else
    {
        cout<<"you have entered the wrong color";
    }
    return 0;
}
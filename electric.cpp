# include<iostream>
using namespace std;
int main()
{
    int unit=0;
    
     cout<<"enter the unit u have consumed";
     cin>>unit;
     if (unit<=100&&unit>=0)
     {
        cout<<unit*10;
     }

     else if(unit<=150&&unit>=100)
     {
        cout<<(100*10)+((unit-100)*20);
     }
     else if(unit<=200&&unit>=150)
     {
        cout<<(100*10)+(50*2)+((unit-150)*20);
     }
     else if(unit>200)
     {
        cout<<(100*10)+(50*20)+(50*30)+((unit-200)*40);
     }

     else
     cout<<"invalid input";
    return 0;
}
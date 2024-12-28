# include<iostream>
using namespace std;
int main()
{
   for ( int r=1;r<=5;r++)
   {
      for (int c=1;c<=9;c++)
      {
         if(c>=6-r&&c<=4+r)
         {
            cout<<"*";
         }
         else
         {
            cout<<" ";
         }
      }
      cout<<endl;
   }
}



// rat c>=r
// ILAT c<=r
// LAT c>=6-r
// ILAT c<=6-r
# include<iostream>
using namespace std;

void rev(string arr){
    string temps=arr;
 int start=0,end=arr.length()-1;
 char temp=0;
 while(start<end){
       temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       end--;
       start++;
 }

 if (temps==arr)
 cout<<"palindrome";
 else 
 cout<<"not a palindrome";
 cout<<"\n"<< arr;
} 

int main()
{  
    string ra;
    cin>>ra;
    rev(ra);
    return 0;
}
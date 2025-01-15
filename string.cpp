# include<iostream>
using namespace std;

string rev(string arr){
 int n =sizeof(arr)/sizeof(arr[0]);
 int start=0,end=n-1;
 char temp=0;
 while(start<end){
       temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       end--;
       start++;
 }
return arr;
} 

int main()
{
    string ra="radhe radhe";
    cout<<rev(ra);
    cout<< ra.length();
    cout<<endl;
    cout<< ra.capacity();
    cout<<endl;
    cout<<ra.at(5);
    cout<<endl;
    ra.append("ram");
    cout<<ra;
    cout<<endl;
    cout<<ra.substr(3,5);
    cout<<endl;
    cout<<ra.find("ra");
    cout<<endl;
    ra.replace(0,3,0,'r');
    cout<<ra;
    cout<<endl;
    cout<<ra;
    cout<<endl;
    cout<<ra;
    cout<<rev(ra);

    return 0;
}



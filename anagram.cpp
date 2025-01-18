# include<iostream>
using namespace std;

// string sort(string str){
//     int n=str.length();
//     char temp=0;
//     for (int i=0;i<n-1;i++)
//     {
//        if(str[i]>str[i+1]){
//             temp=str[i];
//             str[i]=str[i+1];
//             str[i+1]=temp;
//        }

//     }
//     cout<<str <<endl;
    
//     return str;
// }

//    void compare(string a,string b){
//             if(a==b)
//             cout<<"anagram";
//             else
//             cout<<"not anagram";
//     }
  
int ana(string a,string b)
{
    int str[256]={0};
    if (a.length()!=b.length())
    {
      return 0;
        }
      
        for(int i=0;i<a.length();i++){
            str[a[i]]++;
            str[b[i]]--;
        }
        
     for (int i=0;i<256;i++)
     {
        if(str[i]!=0)
         {
            return 0;
         }
     }

     return 1;
}




int main()
{
     string a="abcde",b="dabce";
    //  string te1=sort(a);
    //  string te2=sort(b);
    //  compare(te1,te2);
    // cout<<"\n"<<te1<<"\n"<<te2;
     if(ana(a,b))
     cout<<"ana";
     else
     cout<<"not ana";
    
    return 0;
}


// conditions 
// both string must have same length
// (atr1.length!=str2.length) 
// count[str[i]]
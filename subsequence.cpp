# include<iostream>
using namespace std;

int sub(string a,string b){
    int n=b.length(),j=0;
    if(n==0)
    return 1;
    for (int i=0;i<a.length();i++)
    {
        if(a[i]==b[j]){
            j++;
        }
    }

    if(j==n)
        return 1;

    return 0;
}


int main()
{
    string a="abcd",b="ec";
    if(sub)
    cout<<"subse";
    else
    cout<<"not subse";
    return 0;
}
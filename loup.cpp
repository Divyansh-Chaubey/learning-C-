// // convert a character from lower case to upper case  


// # include<iostream>

// using namespace std;
// int con(string arr)
// {
//     int n=arr.length()-1;
//     for(int i=0;i<=n;i++)
//     {
//         if (arr[i]<97&&arr[i]>=65)
//             arr[i]=arr[i]+32;
//         else
//             arr[i]=arr[i]-32;
//     }
    
    
//     cout<< arr;
//     return 0;
// }


// int main()
// {
//     string arr;
//     cin >>arr;
//     con(arr);
//     return 0;
// }



# include<iostream>
using namespace std;


void cc(string &arr){
    int i=0;
    while(arr[i]>arr.length())
    {
        if (arr[i]>='A' && arr[i]<='Z')
            arr[i]=arr[i]+32;
        else
            arr[i]=arr[i]-32;
        ++i;
    }   

    cout<<arr;

}

int main()
{
    string arr;
    cout<<"Enter a string";
    cin>>arr;
    cc(arr);
    return 0;
}
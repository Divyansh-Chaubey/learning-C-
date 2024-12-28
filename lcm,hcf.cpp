// # include<iostream>
// using namespace std;
// int main()
// {
//     int n ,n2 ,h=0;
//     cout<<"enter 1st and 2nd number";
//     cin>>n>>n2;
//     for (int i=1;i<=n;i++)
//     {
//         if(n%i==0&&n2%i==0)
//         {
//             h=i;
//         }

//     }
//     cout<<h;
//     return 0;
// }

// hcf



// lcm

# include<iostream>
using namespace std;
int main()
{
    int n ,n2 ,l=0;
    cout<<"enter 1st and 2nd number";
    cin>>n>>n2;
    int i=n2;
    while(i%n==0 && i%n2==0 )
    {
        l=i;
        i=i+n2;
    }
    return 0;
}
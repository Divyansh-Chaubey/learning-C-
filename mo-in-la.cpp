# include<iostream>
using namespace std;
int main()
{
    int arr[]={2,0,1,3,0,5};
    int j=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }

    }

    for(int i=j;i<6;i++){
            arr[i]=0;
        }
    for(int i=0;i<6;i++)
    cout<<arr[i];

    return 0;
}
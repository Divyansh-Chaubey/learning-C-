# include<iostream>
using namespace std;
int main()
{
    string website, visit , in ,Do;
    cout <<"enter the website";
    cin>>website;
    if(website=="makemytrip")
        {
            cout<<"whats your destination \n 1.international \n 2.national";
            cin >>visit;

            if (visit=="international")
            {
                cout<<"which country you want to visit \n1.Australia\n2.Japan\n3.USA";
                 cin>>in;

                 if(in=="japan")
                 {
                    cout<<"12000";
                 }
                 else if(in=="Australia")
                 {
                    cout<<"14000";
                 }
                 else if(in=="USA")
                 {
                    cout<<"12000";
                 }

                 else{
                    cout<<"invalid selection"; 
                 }
            }

else if (visit=="national"){


    cout<<"entr your destination ";
    cin >>Do;
        if(Do=="pakistan"){
            cout <<"cost : .50rs";
        }
        
        else if(Do=="Gangadhar"){
            cout<<"cost : 2000 rs";
        }
         
         else{
            cout<<" we don't have that option";
         }
}



else
{
    cout<<"invalid website ";
}

        }
    return 0;
}
# include<iostream>
using namespace std;
struct stu{
    int roll;
    string name;
    string course;
    void ask (){
        cout<<"enter your rollno";
        cin>>roll;
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your course";
        cin>>course;
    }

    void dis(){
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<course<<endl;
    }
};

int main()
{
    stu a;
    a.ask();
    a.dis();
    return 0;
}
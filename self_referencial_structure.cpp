# include<iostream>
using namespace std;

struct stu{
    int roll;
    string name;
    string course;
    stu  *p;
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
    stu b;
    a.p=&b;
    b.p=NULL;
    return 0;
}


// self referencial pointer refers to the same structure inside in his own body  
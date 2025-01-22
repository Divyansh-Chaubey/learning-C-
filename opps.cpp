# include<iostream>
using namespace std;

class stu{
   private:
   int roll;
   string name;
   string course;
   public:
   stu (){
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
    
    
    return 0;
}
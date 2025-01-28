# include<iostream>
using namespace std;
class a {
    public: 
        int a ;
        void show(){
            this-> a=a;
            cout <<a;
         }
};
int main()
{
    a obj;
    cout <<obj.a;
    obj.show();
    return 0;
}

// static keybord 
// we use it to access a variable, function & class outside the scope
// in case of static variable we have to initialize it outside the scope of the class   
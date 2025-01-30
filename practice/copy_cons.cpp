# include<iostream>
using namespace std;
class a{
    public:
    int *A ;
    a(int value ){
        A = new int;
        *A=value;
    }
    a (a &obj ){
        A = new int (*obj.A);
    }
    void display(){
        cout<<*A<<endl; //with derefrencing 
        // cout<<A<<endl;  //without derefrencing 
    }

};


int main()
{
    a obj(2);
    a obj2(obj);
    obj2.display();
    obj.display();
    return 0;
}



//deep copy 
// use saperate space to store a value
// in case any one of them get deleted so that other have no effect
// use new keyword for the operation   
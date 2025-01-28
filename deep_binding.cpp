# include<iostream>
using namespace std;

class a{
    public:
    int *roll;
    a(int x){
        roll=new int;
        *roll=x;
    }
    a(a &obj){
        roll=new int;
        roll=obj.roll; //now both pointing towards the same memory address 
     // *roll=*obj.roll; assignig vlaue at the memory directly by derefrencing
    }
};

int main()
{
    a obj1(10);
    a obj2(obj1);
    cout<< *obj2.roll;
    return 0;
}
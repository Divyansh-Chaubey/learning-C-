// abstract class : a class which contain more than one virtual function said to be abstract class
// we can not create an object of that class and we can only use it by inheariting 
// we have to use function overriding to change the value of the function and class
// virtual void show()=0 is a pure virtual function 
// you cannot excess the private data member of the abstract class any how 


# include<iostream>
using namespace std;
class A{
private :
int a;
public :
virtual void show()=0;
};

class b:public A{
 public :
 void show(){
    cout <<a; // we cannot access private data member of the abstract class in any way possible;

 }
};

int main()
{
    b obj;
    obj.show();
    return 0;
}
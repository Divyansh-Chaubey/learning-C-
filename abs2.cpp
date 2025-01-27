// # include<iostream>
// using namespace std;
// class ra{
//     public:
//     void show();
// };
// class rat :public ra{
//     public:
//     void show(){
//         cout<<"Rat";
//     }
// };

// int main()
// {
//     rat obj;
//     obj.show();
//     return 0;
// }

// abstract class with the help of pure virtual function
// void show() =0   pure function 
// virtual void show() =0  pure virtual function
// common genaralize interface
// one *obj=new student()  


// common genaralize interface type of abstraction

// # include<iostream>
// using namespace std;

// class person{
//     public:
//     virtual void show ()=0;
// };
// class student :public person{
//     public:
//     virtual void show (){
//         string name= "radha";
//         int id=12;
//         cout<< name <<"\t"<<id;
//     }
// };
// class teacher:public person{
//     public:
//     virtual void show (){
//         string name= "rani";
//         int id=123;
//         cout<< name <<"\t"<<id;
//     }
// };


// int main()
// {
//     person *obj=new teacher;
//     obj->show();
//     return 0;
// }



#include"iostream"
using namespace std;
class one{
	public:
		int value;
		one(int x=0){
			value=x;
		}
	one	operator +(one obj){
	int result; 
	     result=value+obj.value;
		  return result;
		}	
};
int main()
{
	one obj1(4);
	one obj2(8);
	one obj3;
	obj3=obj1+(obj2);
    cout<<obj3.value;	
    return 0;
} 
# include<iostream>
using namespace std;
class sum{
    public:
    int a;
    sum(int x=0){
        a=x;
    }
    int operator +(sum obj){
       return a = a + obj.a;
    }
};
int main()
{
    sum a(10);
    sum b(5);
    sum c;
    c.a=a+(b);
    cout<<c.a;
    return 0;
}
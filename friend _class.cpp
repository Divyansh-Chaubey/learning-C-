# include<iostream>
using namespace std;
class one {
    int a =10;
    public: friend class b;
};
class b{
    one obj;
    public: void show() {
        cout<<obj.a;
    }
};

int main()
{
    b obj1;
    obj1.show();
    return 0;
}
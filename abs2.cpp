# include<iostream>
using namespace std;
class ra{
    public:
    void show();
};
class rat :public ra{
    public:
    void show(){
        cout<<"Rat";
    }
};

int main()
{
    rat obj;
    obj.show();
    return 0;
}
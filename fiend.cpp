# include<iostream>
using namespace std;

class sum {
    int a ,b;
    public :friend int sh(sum &obj,int i,int j);
};
int sh(sum &obj, int i,int j){
    obj.a=i;
    obj.b=j;
    return obj.a+obj.b;
}

int main()
{
    sum obj;
    cout << sh(obj,1,2);
    return 0;
}
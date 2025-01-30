# include<iostream>
using namespace std;
class one {
    public:
    int roll=1235;
};

class two : virtual public one{

};
class three:virtual public one{

};
class four:public two,public three{

};


int main()
{
    four obj;
    cout<<obj.roll;
    return 0;
}


// virtual keyword is use to create a copy pointer which is use to throughr which the class can directly intaract with the main parent class 
// diamond problem
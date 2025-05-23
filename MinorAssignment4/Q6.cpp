#include<iostream>
using namespace std;
//q3
class MyBat{
    private:
        int a,b,c,d;
    public:
        void getData();
        void setData(int a, int b, int c, int d);
};
//q4
void MyBat::getData(){
    cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<" d: "<<d<< endl;
}
void MyBat::setData(int a, int b, int c, int d){
    this->a=a;
    this->b=b;
    this->c=c;
    this->d=d;
}
// Asnwer: Q6
int main(){
    MyBat b1,b2.b3,b4;
    b1.setData(1,2,3,4);
    b1.getData();
    return 0;
}
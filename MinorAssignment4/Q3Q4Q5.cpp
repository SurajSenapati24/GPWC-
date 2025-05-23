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
//Q5
int main(){
    MyBat b1;
    b1.setData(2,4,5,6);
    b1.getData();
    return 0;
}
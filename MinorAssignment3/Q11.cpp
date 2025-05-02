#include <iostream>
using namespace std;
class A{
    private:
        int x,y;
    public:
        void setXY(int x1,int y1){
            x=x1;
            y=y1;
        }
        void getXY(){
            cout<<"X: "<<x<<", Y: "<<y<<endl;
        }
        ~A(){
            cout<<"END"<<endl;
        }
};
int main(){
    A obj1,obj2;
    obj1.setXY(10,20);
    obj2.setXY(30,40);
    obj1.getXY();
    return 0;
}
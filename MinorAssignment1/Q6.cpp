#include<iostream>
using namespace std;
class Sample{
    public:
        Sample(int x=10){
            cout<<"Value: "<<x<<endl;
        }
};
int main(){
    Sample obj;
    return 0;
}
//Output: Value: 10
// The default constructor is called with the default value of 10.
// If we pass a value to the constructor, it will override the default value.
// The constructor initializes the object with the value passed or the default value if none is provided.
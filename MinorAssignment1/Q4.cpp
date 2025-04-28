#include<iostream>
using namespace std;
int x[100];
int y;
int main(){
    cout<<x[99]<<endl;
    cout<<y<<endl;
    return 0;
}
//Output: The values of Any varaible in the global scope is 0 by default.
#include <iostream>
using namespace std;

class A{
    private:
    int a; int b;

    public:
    void set(int x, int s){
        a = x;
        b = s;
    }
    void get(){
        cout<<"The value of a is "<<a<<" and b is " <<b;
    }
};
int main(){
    A obj;
    obj.set(3,4);
    obj.get();
}
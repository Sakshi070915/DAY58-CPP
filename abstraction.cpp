#include <iostream>
using namespace std;

class summation{
    private:
    int a; int b; int c;

    public:
    void sum(int x, int y){
        a = x;
        b = y;
        c = a+b;
        cout<<"The sum of a and b is: "<<c;
    }
};
int main(){
    summation obj;
    obj.sum(3,4);
}
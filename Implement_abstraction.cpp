#include <iostream>
using namespace std;

class implement_abstraction{
    private:
    int a, b;

    public:
    void set(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"Value of a is : "<<a<<" and b is : "<<b;
    }
};
int main(){
    implement_abstraction obj;
    obj.set(3,5);
    obj.display();
}
#include <iostream>
using namespace std;
class complex{
    public:
    int a, b;
    complex (void){
        a = 10;
        b = 20;

    }
    void printNumber(){
        cout << "Your number is: " << a << " + " << b << "i" <<  endl;
    }
    
};
int main()
{
    complex c;
    c.printNumber();
}
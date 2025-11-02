#include <iostream>
using namespace std;
class complex{
    public:
    int a, b;
    complex(int, int);

    void printNumber(){
        cout << "Enter your number is : "<< a << "+" << b << "i" << endl;
    }

    };
complex :: complex(int x , int y){
        a = x;
        b = y;
    }

int main()
{
    complex c(5, 4);
    c.printNumber();
}
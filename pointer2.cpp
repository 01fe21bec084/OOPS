//write a c++ program using the concept of this pointer

#include <iostream>
using namespace std;
class Demo {
    int a,b;
public:
    int c = 5;
    void display(int a, int b ) {
        this -> a = a + b ;
        this -> b = a - b ;
        cout<< this->a << endl;
        cout<< this->b << endl;
    }
};
int main() {
    int a = 5;
    int b = 3;
    Demo obj;
    Demo *ptr;
    ptr = &obj;
    obj.display(a,b);
    cout<< "acess " <<obj.c<< endl;
    cout<< "ptr " <<ptr -> c << endl ;
    return 0;
}

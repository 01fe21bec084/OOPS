// write a c ++ program to calculate static variable count and display

#include <iostream>
using namespace std;
class Demo {
public:
    int c = 5;
    void dis () {
        cout << " Base " << endl;
    }
};
class der: public Demo {
    public:
        void dispofder() {
            cout << " Derv1 " << endl;
        }
};
int main() {
    Demo obj;
    der *ptr;
    ptr->dis();
    ptr->dispofder();
    return 0;
}

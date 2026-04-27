#include<iostream>
#include<string>
using namespace std;

class shape
{
protected:
    float x;
public:
    void getData(){cin >> x;}
    virtual float calculateArea()=
    0;
};
class square : public shape
{
public:
    float calculateArea()
    {
         return x*x;
    }
};
class circle : public shape
{
public:
    float calculateArea()
    {
        return 3.14*x*x;
    }
};
int main()
{
    square s;
    circle c;
}

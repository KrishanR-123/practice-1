#include <iostream>
using namespace std;

class test
{
    public:int x,y,sum;
            float fsum;
    void first()
    {
        cout<<"Enter first number\n";
    }
    void second()
    {
        cout<<"Enter second number\n";
    }
    int add()
    {
        sum=x+y;
        cout<<sum;
    }
    int minus()
    {
        sum=x-y;
        cout<<sum;
    }
    int mult()
    {
        sum=x*y;
        cout<<sum;
    }
    int divide()
    {
        sum=x/y;
        cout<<fsum;
    }
};

#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class complex
{
private:
    double real;
    double imag;
public:

    complex (double r=0.0,double i=0.0)
    {
        real=r;
        imag=i;
    }
    bool operator == (complex rhs)
    {
        return(real=rhs.real && imag==rhs.imag)? true:false;
    }
};

int main()
{
    complex com1(3.0,0.0);
    if(com1==3.0)
        cout<<"same"<<endl;
    else
        cout<<"not same"<<endl;

     return 0;
}


#include<iostream>
using namespace std;

class complex
{
  int real,imag;

  public:
    void setval(int a,int b)
    {
      real=a;
      imag=b;
    }

    complex operator+(complex a)
    {
      complex temp;
      temp.real=a.real+real;
      temp.imag=a.imag+imag;
      return temp;
    }

    void getval()
    {
      cout<<"Sum= "<<real<<"+"<<imag<<"i";
    }
};

int main()
{
  complex a,b,sum;
  a.setval(1,3);
  b.setval(2,3);

  sum=a+b;
  sum.getval();
}
#include<iostream>
using namespace std;
class Polynomial
{
  int sum1=0,sum2=0,sum3=0,eval;
  public:
    void add(int p1[],int p2[])
    {
      sum1=p1[0]+p2[0];
      sum2=p1[1]+p2[1];
      sum3=p1[2]+p2[2];
      cout<<"Sum of Polynomial: "<<sum1<<"x^2+"<<sum2<<"x^1+"<<sum3;
    }

    void evaluate(int x)
    {
      eval=sum1*(x*x)+sum2*(x)+sum3;
      cout<<"\nEvaluation of Sum at x="<<x<<": "<<eval;
    }
};

int main()
{
  Polynomial p;
  int x1,y1,z1,x2,y2,z2,x;
  cout<<"Enter the coefficients accordingly for Polynomial1\n";
  cout<<"Coefficient of x^2= ";
  cin>>x1;
  cout<<"\nCoefficient of x^1= ";
  cin>>y1;
  cout<<"\nCoefficient of x^0=";
  cin>>z1;
  cout<<"Enter the coefficients accordingly for Polynomial2\n";
  cout<<"Coefficient of x^2= ";
  cin>>x2;
  cout<<"\nCoefficient of x^1= ";
  cin>>y2;
  cout<<"\nCoefficient of x^0= ";
  cin>>z2;
  cout<<"Enter the number to be evaluate on= ";
  cin>>x;
  cout<<"Polynomial 1:"<<x1<<"x^2+"<<y1<<"x^1+"<<z1<<"x^0\n";
  cout<<"Polynomial 2:"<<x2<<"x^2+"<<y2<<"x^1+"<<z2<<"x^0\n";
  int p1[]={x1,y1,z1};
  int p2[]={x2,y2,z2};
  p.add(p1,p2);
  p.evaluate(x);
  return 0;
}
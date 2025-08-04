#include <iostream>
using namespace std;
int fact=1;
int factorial(int n)
{
    fact=fact*n;
    n=n-1;
    if (n!=0)
    {
        return factorial(n);
    }
    else
    {
        return fact;
    }
}

int prime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        cout<<"\nThe number is prime";
    }
    else
    {
        cout<<"\nThe number is not prime";
    }
    return 0;
}

int main()
{
    int n,p;
    cout<<"Enter the number you want factorial for=";
    cin>>n;
    cout<<"Enter the number you want to check if prime=";
    cin>>p;
    int b=factorial(n);
    cout<<"\nFactorial of the function is="<<b;
    prime(p);
    return 0;
}

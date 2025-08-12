#include <iostream>
using namespace std;
void conjecture(int a,int b)
{
    int count1=0;

    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
            count1+=1;
        }
        else
        {
            a=(3*a+1);
            count1+=1;
        }
    }
    cout<<"Number "<<b<<" "<<":"<<"Steps  "<<count1<<"\n";
}

int main()
{
    int a;
    cout<<"Enter the number =";
    cin>>a;
    cout<<"Collage Simulation upto "<<a<<"\n";
    for(int i=1;i<=a;i++)
    {
        conjecture(i,i);
    }
    return 0;
}

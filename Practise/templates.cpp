//In this we will see the use of templates
#include<iostream>
using namespace std;

template<typename T>class add
{
  public:
    T myadd(T x,T y)
    {
      return x+y;
    }
};

int main()
{
  add<int> intAdd;
  cout<<intAdd.myadd(3,4);
}

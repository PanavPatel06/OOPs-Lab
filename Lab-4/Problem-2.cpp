#include<iostream>
using namespace std;
class DynamicArray
{
  private:
    int *arr;
    int size;
  public:
    DynamicArray(int s)
    {
      size=s;
      arr=new int[size];
      cout<<"DynamicArray constructor called for size "<<size<<"\n";
      for(int i=0;i<size;i++)
      {
        arr[i]=0;
      }
    }
    ~DynamicArray()
    {
      cout<<"DynamicArray destructor called for size "<<size<<"\n";
      delete[] arr;
      arr=NULL;
    }
    void setElement(int i,int value)
    {
      if(i<size)
      {
        arr[i]=value;
      }
    }
    void getElement()
    {
      for(int i=0;i<size;i++)
      {
        cout<<"Element at index "<<i<<" : "<<arr[i]<<"\n";
      }
    }
};

int main()
{
  DynamicArray arr1(5);
  DynamicArray arr2(3);
  cout<<"Array 1\n";
  arr1.setElement(0,10);
  arr1.setElement(1, 20);
  arr1.setElement(4, 50);
  arr1.getElement();
  cout<<"Array 2\n";
  arr2.setElement(0, 100);
  arr2.setElement(2, 300);
  arr2.getElement();
  return 0;
}
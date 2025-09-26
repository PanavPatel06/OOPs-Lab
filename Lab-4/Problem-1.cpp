#include<iostream>
using namespace std;
class Rectangle
{
  private:
    double length;
    double width;

  public:
    Rectangle(double l,double w)
    {
      length=l;
      width=w;
    }

    double calculateArea()
    {
      return (length*width);
    }

    void displayDimensions()
    {
      cout<<"\nThe dimensions of the rectangle ="<<length<<" and "<<width<<"\n";
    }
};

int main()
{
  Rectangle obj1(10,5);
  obj1.displayDimensions();
  cout<<"Area of rectangle = "<<obj1.calculateArea();
  Rectangle obj2(20,10);
  obj2.displayDimensions();
  cout<<"Area of rectangle = "<<obj2.calculateArea();
  return 0;
}
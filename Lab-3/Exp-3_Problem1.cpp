#include<iostream>
#include<cstring>
using namespace std;
class Student
{
  private:
    char name[100];
    int rollNumber;
    int marks;
  public:
    void setDetails(char n[],int r,int m)
    {
      strcpy(name,n);
      rollNumber=r;
      marks=m;
    }

    void displayDetails()
    {
      cout<<"Student details\n"<<"Name: "<<name<<"\n"<<"Roll Number: "<<rollNumber<<"\n"<<"Marks: "<<marks;
    }
};

int main()
{
  Student s1;
  char n[100];
  int r;
  int m;
  cout<<"Enter Name: ";
  cin>>n;
  cout<<"Enter Roll Number: ";
  cin>>r;
  cout<<"Enter Marks: ";
  cin>>m;
  s1.setDetails(n,r,m);
  s1.displayDetails();
  return 0;
}
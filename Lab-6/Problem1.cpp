#include<iostream>
using namespace std;

class Person
{
  private:
    string name;
    int age;
  public:
    Person(string n,int a)
    {
      name=n;
      age=a;
      cout<<"Person constructor called\n";
    }
    void displayPerson()
    {
      cout<<"Person Details:\n"<<" Name: "<<name<<"\n Age: "<<age<<"\n";
    }
};

class Student:public Person
{
  private:
    string StudentId;
    string major;
  public:
    Student(string name,int age,string Id,string maj):Person(name,age)
    {
      StudentId=Id;
      major=maj;
      cout<<"Student constructor called\n";
    }
    void displayStudent()
    {
      displayPerson();
      cout<<"Student Details:\n"<<" StudentID: "<<StudentId<<"\n Major: "<<major<<"\n";

    }
};

int main()
{
  Student student1("Alice Smith", 20, "S1001", "Computer Science");
  student1.displayStudent();
}
// Write a program to calculate and display the grade of a student based on marks in 5 subjects
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e;
    int sum;
    cout<<"enter student subjects grades accordingly= ";
    cin>>a>>b>>c>>d>>e;
    sum=(a+b+c+d+e)/5;
    if(sum>=90)
    {
        cout<<"Your grade is A+";
    }
    else if (sum<90 && sum>=80)
    {
        cout<<"Your grade is A";
    }
    else if (sum<80 && sum>=70)
    {
        cout<<"Your grade is B+";
    }
    else if (sum<70 && sum>=60)
    {
        cout<<"Your grade is B";
    }
    else if (sum<60 && sum>=50)
    {
        cout<<"Your grade is C";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}
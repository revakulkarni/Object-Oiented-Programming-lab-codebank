#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    int roll_no;
    void get_data()
    {
        cout<<"Enter the Roll No: ";
        cin>>roll_no;
    }
};

class test:public student
{
    public:
    int marks1,marks2;
    void get()
    {
        cout<<"Enter the marks in first subject: ";
        cin>>marks1;
        cout<<"Enter the marks in second subject: ";
        cin>>marks2;
        cout<<"----------------------------"<<endl;
    }
};

class result: public test
{
    public:
    int tot;
    void total()
    {
        tot=marks1+marks2;
    }
    
    void display()
    {
        cout<<"Results:"<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Marks: "<<marks1<<"   "<<marks2<<endl;
        cout<<"Total marks:  "<<tot<<endl;
    }
};
int main()
{
    result obj1;
    obj1.get_data();
    obj1.get();
    obj1.total();
    obj1.display();
    return 0;
}

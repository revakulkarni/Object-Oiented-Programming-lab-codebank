#include <iostream>
#include <string>
using namespace std;

class publication
{
    public:
    string title;
    float price;
    void get_data()
    {
        cout<<"Enter the title: ";
        cin>>title;
        cout<<"Enter the price: ";
        cin>>price;
    }
};

class book:public publication
{
    public:
    int page_count;
    void get()
    {
        cout<<"Enter the number of pages: ";
        cin>>page_count;
    }
    void display_data()
    {
        cout<<"Details of the book:"<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"No. of pages:  "<<page_count<<endl;
    }
};

class tape: public publication
{
    public:
    float minutes;
    void minute()
    {
        cout<<"Enter the playing time in minutes: ";
        cin>>minutes;
        cout<<"----------------------------"<<endl;
    }
    
    void display()
    {
        cout<<"Playing time:  "<<minutes<<endl;
    }
};
int main()
{
    book obj1;
    tape obj2;
    obj1.get_data();
    obj1.get();
    obj2.minute();
    obj1.display_data();
    obj2.display();
    return 0;
}

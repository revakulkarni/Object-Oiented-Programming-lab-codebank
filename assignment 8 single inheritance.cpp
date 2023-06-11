#include <iostream>
#include <string>
using namespace std;

class book
{
    public:
    string author, title;
    void get_data()
    {
        cout<<"Enter the author name: ";
        cin>>author;
        cout<<"Enter the title: ";
        cin>>title;
    }
};

class details:public book
{
    public:
    int tot_pages;
    void get()
    {
        cout<<"Enter the total number of pages:";
        cin>>tot_pages;
        cout<<"----------------------------"<<endl;
    }
    void display()
    {
        cout<<"Details of the book are:"<<endl;
        cout<<"Author name: "<<author<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Total number of pages: "<<endl;
    }
};
int main()
{
    details obj1;
    obj1.get_data();
    obj1.get();
    obj1.display();
    return 0;
}

/*Create a class Book with data members as bname,id,author,price. Write getters and setters 
for all the data members. Also add the display function. Create Default and Parameterized 
constructors. Create the object of this class in main method and invoke all the methods in 
that class.*/

using namespace std;
#include<iostream>
#include<string.h>
class book
{
    public:
    char name[20];
    int id;
    char author[20];
    int price;

    book()
    {
        strcpy(name,"Programming in C");
        this->id=20;
        strcpy(author,"Stephen G. Kochan");
        this->price=320;
    }
    book (char* nm, int i, char* a, int p)
    {
        strcpy(name, nm);
        this->id=i;
        strcpy(author, a);
        this->price=p;
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    void setid(int i)
    {
        this->id=i;
    }
    void setauthor(char* a)
    {
        strcpy(this->author,a);
    }
    void setprice(int p)
    {
        this->price=p;
    }
    char* getname()
    {
        return this->name;
    }
    int getid()
    {
        this->id;
    }
    char* getauthor()
    {
        this->author;
    }
    int getprice()
    {
        this->price;
    }
    void display()
    {
        cout<<"\nBook name is: "<<this->name;
        cout<<"\nBook Id is: "<<this->id;
        cout<<"\nBook author is: "<<this->author;
        cout<<"\nBook price is: "<<this->price;
    }
};
int main()
{
    book b1;
    b1.display();
    cout<<"\n";
    
    book b2("C++ Programming Language", 2, "Bjarne Stroustrup", 300);
    b2.display();
    cout<<"\n";

    book b3("Effective JAVA", 3, "Joshua Bloch", 400);
    b3.display();
    cout<<"\n";
}

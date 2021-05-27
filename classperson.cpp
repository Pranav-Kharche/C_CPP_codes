/*Create a class Person with data members as name, age, city. Write getters and setters 
for all the data members. Also add the display function. Create Default and 
Parameterized constructors. Create the object of this class in main method and 
invoke all the methods in that class.*/

using namespace std;
#include<iostream>
#include<string.h>
class person
{
    public:
    char name[20];
    int age;
    char city[15];
    person()
    {
        strcpy(name,"Sachin");
        this->age=20;
        strcpy(city,"Pune");
    }
    person (char* nm, int a, char* c)
    {
        strcpy(name, nm);
        this->age=a;
        strcpy(city, c);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    void setage(int a)
    {
        this->age=a;
    }
    void setcity(char* c)
    {
        strcpy(this->city,c);
    }
    char* getname()
    {
        return this->name;
    }
    int getage()
    {
        this->age;
    }
    char* getcity()
    {
        this->city;
    }
    void display()
    {
        cout<<"\nName is: "<<this->name;
        cout<<"\nAge is: "<<this->age;
        cout<<"\nCity is: "<<this->city;
    }
};
int main()
{
    person p1;
    p1.display();
    cout<<"\n";
    
    person p2("Rohit", 24, "Mumbai");
    p2.display();
    cout<<"\n";

    person p3("Virat", 25, "Nagpur");
    p3.display();
    cout<<"\n";
}

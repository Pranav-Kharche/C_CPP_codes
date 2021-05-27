using namespace std;
#include<iostream>
#include<string.h>
class complex
{
    int real,img;
    public:
    complex()
    {
        real=1;
     -   img=2;
    }
    complex (int r, int im)
    {
         this->real=r;
         this->img=im;
    }
    void setreal(int a)
    {
        this->real=a;
    }
    void setimg(int b)
    {
        this->img=b;
    }
    int getreal()
    {
        return this->real;
    }
    int getimg()
    {
        this->img;
    }
    
    void display()
    {
        cout<<"\nreal is: "<<this->real;
        cout<<"\nimg is: "<<this->img;
        
    }
};
int main()
{
    complex c1;
    c1.display();
    cout<<"\n";
    
     complex c2(3,2);
    c2.display();
    cout<<"\n";
}

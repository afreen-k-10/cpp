#include <iomanip> 
#include <ios> 
#include <iostream> 
using namespace std;
class A;
class B
{
    int b;
    public: 
    void set()
    {
        cout<<"\nBb: ";
        cin>>b;
    }
    void display()
    {
        cout<<"\nBb: "<<b;
    }
    void swap(A&);
};

class A;
{
    int a;
    public: 
    void set()
    {
        cout<<"\nAa: ";
        cin>>a;
    }
    void display()
    {
        cout<<"\nAa: "<<a;
    }
    friend void B:: swap(A&);
};

void B::swap(a &p)
{
    int r=p.a;
    p.a=b; 
    b=r; 

}

void main()
{
    A obja;
    B objb;
    obja.set();
    objb.set();
    obja.display();
    objb.display();
    objb.swap(obja);
    obja.display();
    objb.display();
}
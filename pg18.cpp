#include <iomanip> 
#include <ios> 
#include <iostream> 
using namespace std;
class A 
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
    void swap(B&);
};

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
    friend void A:: swap(B&);
};

void A::swap(b &q)
{
    int r=a;
    a=q.b;
    q.b=r;
}

void main()
{
    A obja;
    B objb;
    obja.set();
    objb.set();
    obja.display();
    objb.display();
    obja.swap(objb);
    obja.display();
    objb.display();
}
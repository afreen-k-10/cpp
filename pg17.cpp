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
    friend void swap(A&, B&);
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
    friend void swap(A&, B&);
};

void swap(A &p, B &q)
{
    int r=p.a;
    p.a=q.b;
    q.b=r;
}

int main()
{
    A obja; B obja;
    obja.set();
    objb.set();
    obja.display();
    objb.display();
    swap(obja,objb);
    obja.display();
    objb.display();
}


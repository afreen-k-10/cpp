#include <iostream>
#include <stdio.h>
using namespace std;
class number
{
    int x,y;
    void swap()
    {
        int z=x;
        x=y;
        y=z;
    }
    public:
        void set()
        {
            cout<<"\nx: ";
            cin>>x;
            cout<<"\ny: ";
            cin>>y;
        }
        void set(int a)
        {
            x=y=a;
        }
        void set(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void set(number &t)
        {
            x=t.x; y=t.y;
        }
        void display()
        {
            cout<<"\nx: "<<x<<"\ny: "<<y;
        }
        int getX(){ return x; }
        int getY(){ return y; }
        void setX(int a){x=a;}
        void setY(int a){y=a;}
        void callswap()
        {
            swap();
        }
};
int main()
{
    number p;
    p.set();
    p.display();
    p.callswap();
    p.display();
    number q;
    q.set(p);
    q.display();
    number r;
    int a=p.getX()+q.getX();
    a=p.getY()+q.getY();
    int b;
    r.set(a,b);
    r.display();
}
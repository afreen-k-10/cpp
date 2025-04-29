#include <iostream>
#include <stdio.h>
#include <iomanip> 
#include<stdlib.h>
using namespace std;
 
class mytime
{
    int h,m,s;
    long int toseconds()
    {
        return h*3600l+m*60+s;
    }
    public:
    mytime()
    {
        h=m=s=0;
    }
    mytime(int a, int b=0, int c=0)
    {
        h=a;m=b;s=c;
    }
    mytime(long int a)
    {
        h=a/3600;
        a=a%3600;
        m=a/60;
        s=a%60;
    }
    mytime(mytime &a)
    {
        h=a.h;m=a.m;s=a.s;
    }
    ~mytime(){}
    friend istream & operator>>(istream & in, mytime &t)
    {
        cout <<"\n Hr: ";in >> t.h;
        cout <<"\n Mn: ";in >> t.m;
        cout <<"\n Ss: ";in >> t.s;
        return in;
    }
    friend ostream & operator<<(ostream & out, mytime &t)
    {
        out<<"\nHr: "<<t.h<<"\nMn: "<<t.m<<"\nSs: "<<t.s;
        return out;
    }

    mytime operator+(mytime &k)
    {
        long int a=toseconds();
        long int b=k.toseconds();
        long int c=labs(a-b);
        mytime t(c);
        return t;
    }

    int getHr(){return h;}
    int getMn(){return m;}
    int getSs(){return s;}

    int operator>(mytime &t)
    {
        return toseconds()>t.toseconds();
    }

    int operator<(mytime &t)
    {
        return toseconds()<t.toseconds();
    }

};


int main()
{
    mytime p,q,r;
    cout<<"\nTime 1: ";
    cin >> p;
    cout<<"\nTime 2: ";
    cin >> q;
    r=p+q;
    cout<<p<<q<<r;
    if(p>q)
       cout<<"\nFirst time is more";
    else
       cout<<"\nSecond time is more";
}
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int x,y;
    void swap(int&,int&);
    cout<<"\n enter 2 nos: ";
    cin>>x>>y;
    cout<<"\nx: "<<x<<"\ny: "<<y;
    swap(x,y);
    cout<<"\nx: "<<x<<"\ny: "<<y;
    return 0;
}
void swap(int &a, int &b, int &c)
{
    c=a;
    a=b;
    b=c;
}
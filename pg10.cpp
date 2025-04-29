#include <iostream>
#include <stdio.h>
using namespace std;
void display()
{
    cout<<"\nWelcome";
}
void display(int z)
{
    cout<<"\ndata:\n"<<z;
}
void display(long int k)
{
    cout<<"\n data:\n"<<k;
}
void display(double d)
{
    cout<<"\ndata:\n"<<d;
}

int main()
{
    display();
    display(10);
    display(8.7);
    long int no=1024;
    display(no);
    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
class number
{
    int no; 
    public:
    number()
    {
        no=0;
        cout<<"\nDefault";
    }
    number(int a)
    {
        no=a;
        cout<<"\nPara";
    }
    number(number &t)
    {
        no=t.no;
        cout<<"\ncopy";
    }
    ~number()
    {
        cout<<"\ndestructors";
    }
};

void setData()
{
	int no;
    cout<<"\nEnter no: ";
    cin>>no;
}

void setData(int a)
{
    int no;
	no=a;
}

void display()
{
    int no;
	cout<<"\nNo: "<< no;
}
int getNo(){
    int no;
	return no;
};

int main()
{
    number a;
    a.display();
    {
        number b(20);
        b.display();
    }
    number(101);
    c.display();
    number d(c);
    d.display();
    d.setData();
    d.display();
    
}
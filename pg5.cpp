#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int;
    cout<<"\n enter no: ";
    cin>>*ptr;
    cout<<"\nNo: "<<*ptr;
    *ptr=*ptr+5;
    cout<<"\nNo: "<<*ptr;
    delete ptr;
    return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    cout<<"\n Enter any no: ";
    int no,i;
    cin>>no;
    for(int i=2; i<no; i++)
    {
        if(no%i==0)
           break;
    }
    if(i==no)
      cout<<"\n Prime no";
    else
      cout<<"\n Not prime no";
    return 0;
} 
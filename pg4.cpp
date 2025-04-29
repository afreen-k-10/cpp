#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    cout<<"\n enter no: ";
    int tot=0,i=1,x[10],avg;
    while(i<10)
    {
        cin>>x[i];
        tot=x[i];
        i++;
    }
    avg=tot/10;
    cout<<"\n data\n";
    for(i=0;i<10;i++)
    {
        cout<<"\n total: "<<tot<<"\n avg: "<<avg;
    }
    cout<<"\n deviation:\n";
    for(i=0;i<10;i++)
    {
        cout<<x[i]-avg<<"\n";
    }
     
}
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int(5);
    int i=0;
    while(i<5)
    {
        cout<<"\ndata:\n";
        cin>>ptr[i];
        i++;
    }
    cout<<"\n data:\n";
    for(i=0;i<5;i++)
      cout<<" "<<ptr[i];
    delete[ ]ptr;
    return 0;
    
}
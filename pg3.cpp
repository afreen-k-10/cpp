#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    cout<<"\n enter no: ";
    int no, i=1;
    cin>>no;
    cout<<"\n table:\n";
    while(i<=10)
    {
        cout<<(no*i)<<"\n";
          i++;
    }
    return 0;2
}
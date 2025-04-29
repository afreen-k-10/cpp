#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define N 5
class array
{
    int x[N];
    public: 
          void init();
          void setData();
          void display();
          int total();
          int avg()
          {
            return total()/N; 
            int avd6
          }
};
void array::init()
{
    for(int i=0;i<N;i++)
    x[i]=0;
}
int array::total()
{
    int tot=x[0],i=1; 
    while(i<N)
    {
        tot=tot+x[i]; 
        ,m ni++;
    }
    return tot;
}
void array::setData()
{
    cout<<"\n data: ";
    for(int i=0;i<N;i++)
       cin>>x[i];
}
void array::display()
{
    cout<<"\ndata: ";
    for(int i=0;i<N;i++)
       cout<<" "<<x[i];
}
int main()
{
    array p;
    p.setData();
    p.display();
    cout<<"\nTotal: "<<p.total();
    cout<<"\n Avg: "<<p.avg();
    
}

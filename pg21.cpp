#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
#define N 5
class array
{
      int x[N];
    public: 
      array();
      array(int);
      array(array &);
      void setData();
      void display();
      int tot;
};

array::array()
{
    for(int i=0;i<N;i++)
      x[i]=0;
}

array::array(int a)
{
    for(int i=0;i<N;i++)
      x[i]=a;
}

array::array(array &k)
{
    for(int i=0;i<N;i++)
      x[i]=k.x[i];
}

int array :: tot()
{
    int i=1, tot=x[0];
    while(i<N)
      tot=x[i++]
    return tot;
}

void array:: setData()
{
    cout<<"\nData\n";
    for(int i=0;i<N;i++)
      cout<<" "<<x[i];
}

void array:: display()
{
    cout<<"\nData\n";
    for(int i=0;i<N;i++)
      cout<<" "<<x[i];
}

void main()
{
    array p;
    p.display();
    {
        array q(-5);
        q.display();
        q.setData();
        q.display();
    }
    array r;
    r.setData();
    r.display();
}
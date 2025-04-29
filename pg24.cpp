#include <iostream>
#include <stdio.h>
#include <iomanip> 
#include<stdlib.h>
# define N 5
using namespace std;

class result
{
    int no;
    int mrk[N];
    
    public: 
    // int no;
    // int mrk[N];
    result();
    result(result &);
    ~result(){}
    friend istream &operator>>(istream&,result&);
    friend ostream &operator<<(ostream&,result&);
    int total();
    operator int()
    {
        return no;
    }

    operator double()
    {
        int tot=total();
        double avg=double(tot)/N;
        return avg;
    }
};

result :: result()
{
    no=0;
    for(int i=0;i<N;i++)
       mrk[i]=0;
}

result::result(result &k)
{
    no=k.no;
    for(int i=0;i<N;i++)
      mrk[i]=k.mrk[i];

}


int result:: total()
{
    int tot=mrk[0],i=1;
    while(i<N)
    {
        tot+=mrk[i];
        i++;
    }
    return tot;
}

istream &operator>>(istream &in, result &r)
{
    cout<<"\n roll no: ";
    in>>r.no;
    cout<<"\n marks: ";
    for(int i=0;i<N;i++)
      in>>r.mrk[i];
    return in;

}


ostream &operator<<(ostream &out, result &r)
{
    out<<"\n roll no: "<<r.no;
    out<<"\n marks: ";
    for(int i=0;i<N;i++)
      out<<" "<<r.mrk[i];
    return out;

}

int main()
{
    result p;
    cin>>p;
    cout<<p;
    int no=p;//type covrn from result to int
    double mrk=p;//type covrn from result to double
    cout<<"\nroll no: "<<no;
    cout<<"\nmarks: "<<mrk;
    return 0;
}

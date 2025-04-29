#include <iostream>
#include <stdio.h>
#include <iomanip> 
using namespace std;
 


class matrix
{
    int x[3][3];
    public:
    matrix();
    matrix(matrix &);
    ~matrix(){}
    friend istream & operator >> (istream &, matrix &);
    friend ostream & operator << (ostream &, matrix &);
    matrix operator+ (matrix &);
    matrix operator- (matrix &);
    matrix operator* (matrix &);
    void operator-();
};

int main()
{
    matrix p,q,r;
    cin>>p>>q;
    cout<<p<<q;
    r=p+q;
    cout<<r;
    -r;
    cout<<r;
}

matrix :: matrix()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         x[i][j]=0;
    }
}

matrix :: matrix (matrix &t)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         x[i][j]=t.x[i][j];
    }

}

istream & operator >>(istream &in,matrix &t)
{
    cout<<"\nmatrix data\n";
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        in>>t.x[i][j];
    }
    return in;
}

ostream & operator << (ostream &out,matrix &t)
{
    cout<<"\nmatrix data\n";
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        out<<" "<<t.x[i][j];
        out <<"\n";
    }
    return out;
}


matrix matrix:: operator+(matrix &t)
{
    matrix a;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        a.x[i][j]=x[i][j]+t.x[i][j];
        
    }
    return a;
}

matrix matrix:: operator-(matrix &t)
{
    matrix a;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        a.x[i][j]=x[i][j]-t.x[i][j];
        
    }
    return a;
}

matrix matrix:: operator*(matrix &t)
{
    matrix a;
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                a.x[i][j]=x[i][k]*t.x[k][j];
            }
        }
        
    }
    return a;
}

void matrix :: operator -()
{
    int i,j,tmp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            tmp=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=tmp;
        }
        
    }
}
#include <iomanip> 
#include <ios> 
#include <iostream> 

using namespace std;
class matrix2
{
    int x[3][3];
    public:
         void init();
         void setData();
         void display();
         void transpose();
         void add(matrix2&, matrix2&);
         void sub(matrix2&, matrix2&);
         void mul(matrix2&, matrix2&);
};

int main()
{
    matrix2 a,b,c;
    a.setData();
    a.display();
    b.setData();
    b.display();
    c.add(a,b);
    c.display();
}

void matrix2 :: add(matrix2 &p, matrix2 &q)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          x[i][j]= p.x[i][j] + q.x[i][j];
    }
}

void matrix2 :: sub(matrix2 &p, matrix2 &q)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
          x[i][j]=p.x[i][j]-q.x[i][j];
    }
}

void matrix2 :: mul(matrix2 &p, matrix2 &q)
{
    int i,j,k,init();
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
              x[i][j]+=(p.x[i][j] * q.x[i][j]);
              
        }
    }
}


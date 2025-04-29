#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
class book
{
    int bno;
    char bnm[15];
    int bprice;
    public: 
        void setData()
        {
            cout<<"\nBook No: ";
            cin>>bno;
            cout<<"\nBook Name: ";
            cin>>bnm;
            cout<<"\nPrice: ";
            cin>>bprice;
        }
        void display()
        {
            cout<<"\nBook Data\nNo:"<<bno<<"\nName: "<<bnm<<"\nPrice: "<<bprice;
        }
        void setData(int no)
        {
            bno=0;
            cout<<"\nBook name: ";
            cin>>bnm;
            cout<<"\nPrice: ";
            cin>>bprice;
        }
        int getNo(){return bno;}
        int getPrice(){return bprice;}
        char *getName(){return bnm;}
        int equals(int no)
        {
            return(bno==no);
        }
        int equals(char *nm)
        {
            return(strcmp(bnm,nm)==0);
        }
};
int main()
{
    book a,b;
    a.setData();
    a.display();
    if(a.equals(123)==1)
      cout<<"\nMatch record No. wise";
    else
      cout<<"\nMismatch record No. wise";
    b.setData();
    b.display();
    cout<<"\nEnter Book Name to search: ";
    char s[50];
    cin>>s;
    if(b.equals(s)==1)
      cout<<"\nRecord found";
    else 
      cout<<"\nRecord not found";
    return 0;

}
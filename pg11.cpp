
#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
    private:
        int no;
        char nm[15];
    
    public:
        void setData()
        {
            cout<<"\nRoll no: ";
            cin>>no;
            cout<<"\nName: ";
            cin>>nm;
        }
        void display()                     
        {
            cout<<"\nRoll no: "<<no<<"\nName: "<<nm;
        }
};
int main()
{
    student a;
    a.setData();
    a.display();
}
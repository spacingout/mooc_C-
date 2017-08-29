#include <iostream>

using namespace std;
class Coordinato
{
public:
    int x;
    int y;
    void printx()
    {cout<<x<<endl;}
    void printy()
    {cout<<y<<endl;}
};
int main()
{
    Coordinato coor;
    coor.x=90;
    coor.y=39;
    coor.printx();
    coor.printy();

    Coordinato *q=new Coordinato();
    if(q==NULL)
    {cout<<"error";return 0;}
    q->x=49;
    q->y=94;
    q->printx();
    q->printy();
    delete q;
    q=NULL;
    return 0;
}

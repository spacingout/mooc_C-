#include <iostream>
#include<stdlib.h>
using namespace std;
void fun(int &a,int &b);
int main()
{
    int a,b;
    a=10;b=90;
    fun(a,b);
    cout<<a<< " "<<b;
    return 0;
}
void fun(int &a, int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}

int getmax(int x,int y,int z );
double getmax(double x,double y);

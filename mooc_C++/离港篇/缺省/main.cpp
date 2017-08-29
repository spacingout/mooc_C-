#include <iostream>

using namespace std;
inline void fun(int i=30,int j=20,int k=10);
inline void fun(double i,double j);

int main()
{
    fun();
    fun(30.25,40.4454);
    fun(10,20,70);
    return 0;
}
void fun(int i, int j, int k)
{
    cout<<i<<','<<j<<','<<k<<endl;
}
void fun(double i,double j)
{
    cout<<i<<','<<j<<endl;
}

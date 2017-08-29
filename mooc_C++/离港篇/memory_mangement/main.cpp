#include <iostream>

using namespace std;

int main()
{
    int *p=new int[100];
    if(p==NULL)
    {
        cout<<"ERROR";
    }
    p[0]=90;
    p[1]=43;
    cout<<p[0]<<" "<<p[1]<<endl;

    delete []p;
    p=NULL;
    return 0;
}

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"please input your name:"<<endl;
    getline(cin,name);
    if(name=="immoc")
        cout<<"your are an adminstor"<<endl;
    if(name.empty())
    {
        cout<<"your intput is empty"<<endl;
        return 0;
    }

    else
    {   cout<<"hello"<<" "<<name<<endl;
        cout<<"the strength of your name is:"<<name.size()<<endl;
        cout<<"the first alpha of your name is: "<<name[0]<<endl;
    }
    return 0;
}

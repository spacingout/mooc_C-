#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Worker
{
public:
    Worker(string name)
    {
        m_strName = name;
        cout << "Worker" << endl;
    }
    ~Worker()
    {
        cout << "~Worker" << endl;
    }
    void work()
    {
        cout << m_strName << endl;
        cout << "work" << endl;
    }
protected:
    string m_strName;
};
class Children
{
public:
    Children(int age)
    {
        m_iAge=age;
        cout<<"Children"<<endl;
    }
    ~Children()
    {
        cout<<"~children"<<endl;
    }
    void play()
    {
        cout<<m_iAge<<endl;
        cout<<"PLAY"<<endl;
    }
protected:
    int m_iAge;
};
class ChildLabourer: public Worker,public Children
{
public:
    ChildLabourer(string name,int age):Worker(name),Children(age)
    {
        cout<<"ChildLabouber"<<endl;
    }
    ~ChildLabourer()
    {
        cout<<"~ChildLabouber"<<endl;
    }
};
int main()
{
    ChildLabourer *p=new ChildLabourer("talons",21);
    p->play();
    p->work();
    delete p;
    p=NULL;
    return 0;
}

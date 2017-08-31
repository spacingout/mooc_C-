#include "Teacher.h"
using namespace std;
Teacher::Teacher()
{
    m_strName="jim";
    m_iAge=34;
    cout<<"no parameter"<<endl;
}
Teacher::Teacher(string name, int age)
{
    m_strName=name;
    m_iAge=age;
    cout<<"parameter!"<<endl;
}


void Teacher::setName(string name)
{
   m_strName=name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setAge(int age)
{
    m_iAge=age;
}
int Teacher::getAge()
{
    return m_iAge;
}

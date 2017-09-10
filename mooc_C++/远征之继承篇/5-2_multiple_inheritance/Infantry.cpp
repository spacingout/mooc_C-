#include<iostream>
#include"Infantry.h"
using namespace std;

Infantry::Infantry(string name,int age)
{
    m_strName=name;
    m_iAge=age;
    cout<<"Ifantry()"<<endl;
}
Infantry::~Infantry()
{
    cout<<"~infantry()"<<endl;
}
void Infantry::attack()
{
    cout<<m_strName<<endl;
    cout<<m_iAge<<endl;
    cout<<"Infanty-attack"<<endl;
}

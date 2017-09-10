#include<iostream>
#include"Soldier.h"
using namespace std;

Soldier::Soldier()
{}
void Soldier::work()
{
    m_strName="jim";
    m_iAge=20;
    cout<<m_strName<<endl;
   cout<<m_iAge<<endl;
   cout<<"soldier--work()"<<endl;
}

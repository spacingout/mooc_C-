#include "Soldier.h"
#include<iostream>
using namespace std;
Soldier::Soldier()
{

}
void Soldier::play(int x)
    {

           cout<<m_strName<<endl;
           cout<<Person::m_strName<<endl;
           cout<<"soldier play()"<<endl;
    }
void Soldier::work()
    {
    Person::m_strName="Jams";
    m_strName="merry";
    cout<<"soldier work()"<<endl;
}

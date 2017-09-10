#include "Person.h"
#include<iostream>
using namespace std;
Person::Person()
{
    m_strName="MERRY";

}
void Person::play()
{
    cout<<"Person--play()"<<endl;
    cout<<m_strName<<endl;
}

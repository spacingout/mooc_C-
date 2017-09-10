#include"Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
    cout<<"Person()"<<endl;
}
Person::~Person()
{
    cout<<"~person()"<<endl;

}


void Person::eat()
{
    m_strName='A';
    m_iAge=90;
    cout<<"eat"<<endl;
}

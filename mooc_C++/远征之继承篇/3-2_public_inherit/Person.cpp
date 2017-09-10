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
    cout<<"eat"<<endl;
}

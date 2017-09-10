#include<iostream>
#include"Person.h"

using namespace std;


Person::Person(string color)
 {
     m_strClor=color;
     cout<<"Person"<<endl;
 }
 Person::~Person()
 {
    cout<<"~Person"<<endl;
}
 void Person::printColor()
 {
     cout<<m_strClor<<endl;
     cout<<"Person--printclolr"<<endl;
 }
 

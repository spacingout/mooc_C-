#include"Person.h"
#ifndef SOLDIER_H
#define SOLDIER_H
class Soldier:public Person
{
public:
    Soldier(string name="james",int age=20);
    virtual ~Soldier();
    void work();
protected:
    int m_iAge;
};

#endif // SOLDIER_H

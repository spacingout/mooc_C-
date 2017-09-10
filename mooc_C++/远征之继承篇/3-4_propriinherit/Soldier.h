#include"Person.h"
#ifndef SOLDIER_H
#define SOLDIER_H
class Soldier:private  Person
{
public:
    Soldier();
    void work();
protected:
    int m_iAge;
 private:
};
#endif // SOLDIER_H

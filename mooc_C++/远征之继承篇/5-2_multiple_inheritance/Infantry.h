#include"Soldier.h"
#ifndef INFANTRY_H
#define INFANTRY_H
class Infantry:public Soldier
{
public:
    Infantry(string name="jack",int age=30);
    ~Infantry();
    void attack();

};

#endif // INFANTRY_H

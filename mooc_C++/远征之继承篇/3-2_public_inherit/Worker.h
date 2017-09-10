#include"Person.h"
#ifndef WORKER_H
#define WORKER_H

class Worker:public Person
{
public:
    Worker();
    ~Worker();
    void work();
    int m_iSalary;

};
#endif // WORKER_H

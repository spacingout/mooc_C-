#include <iostream>
#include<stdlib.h>
#include"Worker.h"
using namespace std;

int main()
{
   Worker worker;
    worker.m_strName="jim";
    worker.m_iAge=34;
    worker.eat();
    worker.m_iSalary=1000;
    worker.work();


    return 0;
}


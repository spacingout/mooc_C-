#include <iostream>
#include<stdlib.h>
#include"MigrantWorker.h"
using namespace std;

int main()
{
    MigrantWorker *p=new MigrantWorker("mERRY","100");
    p->carry();
    p->sow();
    delete p;
    p=NULL;
    return 0;
}

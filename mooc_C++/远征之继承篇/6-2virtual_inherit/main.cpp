#include <iostream>
#include<stdlib.h>
#include"MigrantWorker.h"
using namespace std;

int main()
{
   MigrantWorker *p=new MigrantWorker("merry","200","yello");
   p->Farmer::printColor();
   p->Worker::printColor();
   delete p;
   p=NULL;
    return 0;
}

#include <iostream>
#include<stdlib.h>
#include "Coordinate.h"
using namespace std;

int main()
{
   Coordinate coor[3];
   coor[0].m_iX=3;
   coor[0].m_iY=5;

   Coordinate *p=new Coordinate[3];
   p->m_iX=7;
   p->m_iY=9;

   p++;

   p->m_iX=11;
   p[0].m_iY=13;  //now ,p[0] means 2nd element!!!

   p[1].m_iX=15;
   p++;
   p->m_iY=17;

   for(int i=0;i<3;i++)
{
       cout<<"coor_x"<<coor[i].m_iX<<endl;
       cout<<"coor_y"<<coor[i].m_iY<<endl;
 }
   for(int j=0;j<3;j++)
   {
       cout <<"p_x"<<p->m_iX<<endl;
       cout<<"p_y"<<p->m_iY<<endl;
       p--;
   }
   p++;
   delete []p;
   p=NULL;





   return 0;
}

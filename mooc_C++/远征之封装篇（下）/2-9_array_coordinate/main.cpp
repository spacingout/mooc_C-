#include<iostream>
using namespace std;
class Coordinate
{

public:
    Coordinate()
    {}



    void printInfo()
    {
    cout<<"("<<m_iX<<","<<m_iY<<")"<<endl;

    }

    int m_iX;
    int m_iY;
};
int main(void)
{
    //定义对象数组
    Coordinate dian[2];
    dian[0].m_iX=1;
    dian[0].m_iY=2;
    dian[1].m_iX=3;
    dian[1].m_iY=4;



    //遍历数组，打印对象信息
    for(int i = 0; i < 2; i++)
    {
        dian[i].printInfo();
    }
    return 0;
}

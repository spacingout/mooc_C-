#include <iostream>
#include <stdlib.h>
using namespace std;

namespace myNum           //填写命名空间的关键字
{
    int x = 105;
}
int main()
{
    // 使用bool类型定义isOdd，作为状态位
        bool    isFlag = false;

    if(myNum::x % 2 == 0)
    {
        //改变状态位的值，使其为false
        isFlag=false;
    }
    else
    {
        //改变状态位的值，使其为true
        isFlag=true;
    }
    // 判断状态位的值
    if(isFlag)
    {
        // 如果状态位的值为true，则打印变量x是奇数
        cout<<myNum::x<<"是奇数"<<endl;
    }
    else
    {
        // 如果状态位的值为false，则打印变量x是偶数
        cout<<myNum::x<<"是偶数"<<endl;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
/**
 * 定义类：Student
 * 数据成员：m_strName
 * 无参构造函数：Student()
 * 有参构造函数：Student(string _name)
 * 拷贝构造函数：Student(const Student& stu)
 * 析构函数：~Student()
 * 数据成员函数：setName(string _name)、getName()
 */
class Student
{
public:
    Student(){m_strName="marry";}
    Student(string _name){m_strName=_name;}
    Student(const Student &){}
    ~Student();
   void setName(string _name)
    {
        m_strName=_name;
    }
    string getName()
    {
        return m_strName;
    }
private:
    string m_strName;
};

int main()
{
    // 通过new方式实例化对象*stu
    Student *stu =new Student();
    // 更改对象的数据成员为“慕课网”
    stu->setName("慕课网");
    // 打印对象的数据成员
    cout<<stu->getName();
    return 0;
}

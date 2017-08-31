#include<iostream>
#include<string>
using namespace std;
#ifndef TEACHER_H
#define TEACHER_H
class Teacher
{
public:
    Teacher(string name="jami",int age=3,int m=100);
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    int getMax();
private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};
#endif // TEACHER_H

#include<iostream>
#include<string>
using namespace std;
#ifndef TEACHER_H
#define TEACHER_H
class Teacher
{
public:
    Teacher(string name="jami",int age=3);
    Teacher(const Teacher&);
    ~Teacher();
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();

private:
    string m_strName;
    int m_iAge;

};
#endif // TEACHER_H

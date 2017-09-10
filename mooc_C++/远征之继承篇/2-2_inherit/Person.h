#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
class Person
{
public:
    Person();
    ~Person();
    void eat();
private:

    string m_strName;
    int m_iAge;
};
#endif // PERSON_H

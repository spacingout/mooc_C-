#include <iostream>
#include<teacher.h>
using namespace std;

int main()
{
    Teacher t;
    t.setName("vader");
    t.setAge(30);
    t.setGender("male");
    cout<<"my name is "<<t.getName()<<endl;
    cout<<"my gender is "<<t.getGender()<<endl;
    cout<<"i am "<<t.getAge()<<" years old "<<endl;
    t.teach();

    return 0;
}

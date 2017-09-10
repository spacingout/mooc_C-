#include<string>
using namespace std;
class Person
{
   public:
    Person(string name="jim");
    virtual ~Person();
    void play();
protected:
    string m_strName;
};

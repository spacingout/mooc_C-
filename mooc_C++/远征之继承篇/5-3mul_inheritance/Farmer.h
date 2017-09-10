#include<string>
using namespace std;
#ifndef FARMER_H
#define FARMER_H
class Farmer
{
public:
    Farmer(string name="jack");
    virtual ~Farmer();
    void sow();
protected:
    string m_strName;
};
#endif // FARMER_H

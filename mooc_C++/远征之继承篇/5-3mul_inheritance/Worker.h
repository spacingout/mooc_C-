#include<string>
using namespace std;
#ifndef WORKER_H
#define WORKER_H
class Worker
{
public:
    Worker(string code="001");
    virtual ~Worker();
    void carry();
protected:
    string m_strCode;
};
#endif // WORKER_H

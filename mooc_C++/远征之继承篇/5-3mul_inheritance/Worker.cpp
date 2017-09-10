#include<iostream>
#include"Worker.h"
using namespace std;

Worker::Worker(string code)
{
    m_strCode=code;
    cout<<"Worker():"<<endl;
}
Worker::~Worker()
{
    cout<<"~WORKER"<<endl;
}
void Worker::carry()
{
    cout<<m_strCode<<endl;
    cout<<"worker-carry"<<endl;
}

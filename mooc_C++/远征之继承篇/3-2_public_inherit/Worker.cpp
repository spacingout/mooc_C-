#include<iostream>
#include"Worker.h"
using namespace std;


Worker::Worker()
{
    cout<<"worker"<<endl;
}
Worker::~Worker()
{
    cout<<"~worker"<<endl;
}


void Worker::work()
{
    cout<<"work()"<<endl;
}

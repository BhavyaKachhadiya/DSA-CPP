#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p)
{
    cout<<p->length*p->breadth<<endl;
}

int main()
{
    struct Rectangle r1={10,16};
    
    fun(&r1);
}
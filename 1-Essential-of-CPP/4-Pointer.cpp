#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p;

    p=&a;

    cout<<"Value of a (normal) is "<<a<<endl;
    cout<<"Value of a (Pointer) is "<<*p<<endl;
    cout<<"Value of Pointer is "<<p<<endl;

}

#include<iostream>
using namespace std;

struct Rectangle
{
        int length;
        int breadth;
};
int main()
{

    struct Rectangle r={10,15};
    cout<<"Area of rectangle is "<<r.breadth*r.length<<endl;

    struct Rectangle r1;
    r1.breadth=10;
    r1.length=15;
    cout<<"Area of rectangle is "<<r.breadth*r.length<<endl;

    struct Rectangle r2[2]={{23,15},{20,15}};
    cout<<"Area of rectangle is "<<r2[0].breadth*r2[0].length<<endl;
    cout<<"Area of rectangle is "<<r2[1].breadth*r2[1].length<<endl;
}

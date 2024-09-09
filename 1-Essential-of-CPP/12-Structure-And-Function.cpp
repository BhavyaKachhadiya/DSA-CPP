#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void init(struct Rectangle *r,int l,int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int main()
{
    struct Rectangle r;
    init(&r,10,5);
    int Area = area(r);
    cout << "Area of rectangle: " << Area << endl;
    return 0;
}

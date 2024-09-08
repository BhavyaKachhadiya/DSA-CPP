#include <iostream>

using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1;

    // Static
    struct Rectangle *staticPointer = &r1;
    (*staticPointer).length = 20; // Method - 1
    staticPointer->length = 20;   // Method - 2

    (*staticPointer).breadth = 30; // Method - 1
    staticPointer->breadth = 30;   // Method - 2

    cout << "Static Pointer: " << staticPointer->length << endl;
    cout << "Static Pointer: " << staticPointer->breadth << endl
         << endl;

    // Dynamic
    static Rectangle *dynamicPointer;
    dynamicPointer = new Rectangle;
    dynamicPointer->length = 30;
    dynamicPointer->breadth = 40;

    cout << "Dynamic Pointer: " << dynamicPointer->length << endl;
    cout << "Dynamic Pointer: " << dynamicPointer->breadth << endl;
}
#include <iostream>
using namespace std;
// Passing by value
int addPassingByValue(int a, int b)
{
    return a + b;
}

// Passing By Reference
int addPassingByAddress(int *a, int *b)
{
    return *a + *b;
}

// Passing By Reference
int addPassingByReference(int &a, int &b)
{
    return a + b;
}
int main()
{
    // Call by value
    int num1 = 10, num2 = 10;
    int sum = addPassingByValue(num1, num2);
    cout << "Enter two numbers: " << sum << endl;

    // Call By Address
    int num3 = 20, num4 = 20;
    sum = addPassingByAddress(&num3, &num4);
    cout << "Enter two numbers: " << sum << endl;

    // Call By Reference
    int num5 = 30, num6 = 30;
    sum = addPassingByReference(num5, num6);
    cout << "Enter two numbers: " << sum;
}
#include <iostream>
using namespace std;

int add(int a, int b /*Formal Parameters*/)
{
    int res = a + b;
    return res;
}

int main()
{
    int num1 = 10;
    int num2 = 15;
    int sum;

    sum = add(num1, num2 /*Actual Parameters*/);
    cout << "Sum of the " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}
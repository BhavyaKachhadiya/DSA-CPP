#include <iostream>
using namespace std;

void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " ";

        // if the Recursion function is calling multiple times, then it is caled Tree Recursion
        fun1(n - 1); 
        fun1(n - 1); 
    }
}

int main()
{
    fun1(3);
}
#include <iostream>
using namespace std;

void fun1(int n)
{
    if (n > 0)
    {
        cout<<n<<" ";
        fun1(n - 1); // if fun1(n-1)-n; then it is not called Tail Recursion
    }
}

int main()
{
 fun1(5);
}
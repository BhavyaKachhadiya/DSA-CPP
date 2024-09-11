#include <iostream>
using namespace std;
int fun1(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fun1(fun1(n + 11));
}
int main()
{
    cout << fun1(95) << endl;
    return 0;
}
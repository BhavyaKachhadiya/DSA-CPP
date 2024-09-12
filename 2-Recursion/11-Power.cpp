#include <iostream>
using namespace std;

int Slow_Rpower(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return Slow_Rpower(base, power - 1) * base;
}

int Fast_Rpower(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    if (power % 2 == 0)
    {
        return Fast_Rpower(base * base, power / 2);
    }
    else
    {
        return base * Fast_Rpower(base * base, (power - 1) / 2);
    }
}
int main()
{
    int base = 2, power = 3;
    int res = Slow_Rpower(base, power);
    int res1 = Fast_Rpower(base, power);
    cout << res << endl;
    cout << res1 << endl;
    return 0;
}
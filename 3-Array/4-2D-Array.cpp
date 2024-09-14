#include <iostream>
using namespace std;

int main()
{
    int _2DArray [2][2] = {{0, 1}, {2, 3}};

    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << _2DArray [i][j] << " ";
        }
        cout << endl;
    }
}
#include<iostream>
using namespace std;

int main()
{
    int a[5];

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

    cout << sizeof(a) << endl;

    cout << endl;

    cout << "Element of the first array of 3 index: ";
    cout << a[3] << " ";

    cout << endl;
    cout << endl;

    int b[5] = {1, 2, 3, 4, 5};

    cout << "Elements of the second array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
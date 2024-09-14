#include <iostream>
using namespace std;
int main()
{
    int A[5]={2,3,4,5,6},i;
    int *p;
    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;
    for (i = 0; i < 5; i++)
        printf("%d ", A[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        printf("%d ", p[i]);
    delete p;
    return 0;
}

 Static vs Dynamic Array
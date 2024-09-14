#include <iostream>
using namespace std;

int main()
{
    int *Pointer = new int[5];
    int *Increase = new int[10];

    for (int i = 0; i < 5; i++)
    {  
        Pointer[i]=i;
    }
    for (int i = 0; i < 6; i++)
    {  
        Increase[i]=i;
    }
    
    for (int i = 0; i < 5; i++)
    {
        Increase[i]=Pointer[i];
    }

    delete []Pointer;

    Pointer=Increase;
    Increase = NULL;
    
    for(int i=0;i<10;i++)
        cout<<Pointer[i]<<endl;
    return 0;
}
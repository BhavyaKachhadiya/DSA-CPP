#include<iostream>
using namespace std;

int fact(int n){

    if(n==0) 
    {
        return 1;
    }
    else {
        return n * fact(n-1);  
    }
    return 0;
}
int main(){
    int n = 1;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    return 0;
}
#include<iostream>
using namespace std;

int fun1(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun1(n-1)+x;
    }
    return 0;
}

int main(){
    int a = 5;
    int res = fun1(a);
    cout<<res;
}
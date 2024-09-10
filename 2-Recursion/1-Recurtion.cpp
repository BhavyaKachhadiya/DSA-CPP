#include<iostream>
using namespace std;
void fun1(int n){
    if(n>0) {
    cout<<n<<" ";
    fun1(n-1);
    }
}

int main(){
    int n=5;
    fun1(n); // Output: 120
}
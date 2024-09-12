#include<iostream>
using  namespace std;

int sum(int n){
    if(n == 0)
        return 0;
    else
        return n + sum(n-1);
}

int main(){
    int num=10;
    cout << "Sum of natural numbers up to " << num << " is: " << sum(num) << endl;
    return 0;

}
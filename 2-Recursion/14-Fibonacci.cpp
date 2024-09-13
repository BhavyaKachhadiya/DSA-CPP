#include<iostream>
using namespace std;

int FibonacciNumber[10];
int Memo(int number)
{
  if(number<=1) {
    FibonacciNumber[number]=number;
    return number;
  }
  else
  {
    if(FibonacciNumber[number-2]==-1)
    {
        return FibonacciNumber[number-2] = Memo(number-2);
    }

    if(FibonacciNumber[number-1]==-1)
    {
        return FibonacciNumber[number-1] = Memo(number-1);
    }
    return  FibonacciNumber[number-2] + FibonacciNumber[number-1];
  }
}
int Fibonacci(int number){
    if(number<=1) return number;
    return Fibonacci(number-2) + Fibonacci(number-1);
}

int main(){
    for(int i=0;i<10;i++) FibonacciNumber[i] = -1;
cout<<Fibonacci(10)<<" ";
    return 0;
}
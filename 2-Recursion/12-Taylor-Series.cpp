#include<iostream>
using namespace std;

double TaylorSeries(int Value,int number_of_terms){
    static double Power=1,Factorial=1;
    double result=0;

    if(number_of_terms==0) return 1;
    result = TaylorSeries(Value,number_of_terms-1);
    Power *= Value;
    Factorial *= number_of_terms;
    return result+Power/Factorial;
    
}
int main(){
    cout<<TaylorSeries(1,10);
}
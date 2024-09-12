#include<iostream>
using namespace std;

double TaylorSeries(int Value,int number_of_terms){
    static double seriesSum;
    if(number_of_terms==0) return seriesSum;
   seriesSum=1+Value*seriesSum/number_of_terms;
   return TaylorSeries(Value,number_of_terms-1);
    
    
}
int main(){
    cout<<TaylorSeries(1,10);
}
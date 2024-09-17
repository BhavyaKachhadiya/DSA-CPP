#include <iostream>
using namespace std;
int Arr[] = {10, 20, 30, 40, 50};
int length = sizeof(Arr)/sizeof(Arr[0]);

int get(int index)
{
    if (index >= 0 && index <= length)
        return Arr[index];
    return -1;
}
void setValue(int index, int value){
    if (index >= 0 && index <= length)
        Arr[index] = value;
}

int max(){
    int max = Arr[0];
    for(int i=1; i<length; i++){
        if(Arr[i] > max){
            max = Arr[i];
        }
    }
    return max;
}

int sum(){
    int sum = 0;
    for(int i=0; i<length; i++){
        sum += Arr[i];
    }
    return sum;
}
int average(){
    return sum() / length;
}
int min(){
    int min = Arr[0];
    for(int i=1; i<length; i++){
        if(Arr[i] < min){
            min = Arr[i];
        }
    }
    return min;
}
int main()
{
    cout << get(1) << endl;
    setValue(1, 15);
    cout << max() << endl;
    cout << sum() << endl;
    cout << average() << endl;
    cout << min() << endl;
    return 0;
}
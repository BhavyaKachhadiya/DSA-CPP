#include<iostream>
using namespace std;

template <class T>
class Maths{
    private:
        T a, b;
    public:
        Maths(T x, T y);
        T add();
        T sub();
};

template <class T>
Maths<T>::Maths(T x, T y)
{
    this->a = x;
    this->b = y;
}

template <class T>
T Maths<T>::add()
{
    return a+b;
}

template <class T>
T Maths<T>::sub()
{
    return a-b;
}

int main(){
    Maths<int> m1(5, 3);
    Maths<float> m2(5.5, 3.2);

    cout << "Addition: " << m1.add() << endl;
    cout << "Subtraction: " << m1.sub() << endl;

    cout << "Addition: " << m2.add() << endl;
    cout << "Subtraction: " << m2.sub() << endl;

    return 0;
}
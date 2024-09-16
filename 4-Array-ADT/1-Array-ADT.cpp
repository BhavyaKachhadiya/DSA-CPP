#include <iostream>
using namespace std;

class Array
{

private:
    int *A;
    int size;
    int length;

public:
    Array(int size)
    {
        this->size = size;
        A = new int[size];
    }

    void create()
    {
        cout << "Enter number of elements: " << flush;
        cin >> length;
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Array element: " << i << " = " << flush;
            cin >> A[i];
        }
    }

    void display()
    {
        cout << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    void insert(int number, int index)
    {
        if (index < 0 || index > length)
        {
            cout << "Invalid index" << endl;
            return;
        }
        if (length >= size)
        {
            cout << "Array is full. Cannot insert." << endl;
            return;
        }
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = number;
        length++;
    }
    void append(int number)
    {
        if (this->length < this->size)
            A[length++] = number;
    }

    void remove(int index){
        int i = index;
        if(i >= 0 && i < length){
            while(i < length - 1){
                A[i] = A[i+1];
                i++;
            }
            length--;
        }else{
            cout << "Invalid index" << endl;
        }
    }
    void remove(){
        if(length > 0){
            length--;
            A[length] = 0; // Set the last element to 0
        }else{
            cout << "Array is empty. Cannot remove." << endl;
        }
    }

    ~Array()
    {
        delete[] A;
        cout << endl
             << "Array destroyed" << endl;
    }
};

int main()
{
    Array arr(10);
    arr.create();
    arr.display();
    arr.insert(15, 2);
    arr.display();
    arr.append(100);
    arr.display();
    arr.remove(2);
    arr.display();
    arr.remove();
    arr.display();
    return 0;
}

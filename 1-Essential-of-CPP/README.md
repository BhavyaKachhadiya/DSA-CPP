### File: `1-Array.cpp`

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize the first array of integers with 5 elements
    int a[5] = {1, 2, 3, 4, 5};

    // Print a message indicating the elements of the first array
    cout << "Elements of the first array: ";
    
    // Loop through the first array and print each element
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // Print a newline character for better readability
    cout << endl;

    // Declare and initialize the second array of integers with 5 elements
    int b[5] = {1, 2, 3, 4, 5};

    // Print a message indicating the elements of the second array
    cout << "Elements of the second array: ";
    
    // Loop through the second array and print each element
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
```

### File: `2-Input-Array.cpp`

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n = 0; // Declare an integer variable 'n' to store the number of elements
    cout << "Enter the Number of Elements you want to store: ";
    cin >> n; // Take input from the user for the number of elements

    int arr[n]; // Declare an array 'arr' of size 'n'

    // Loop to take input for each element of the array
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Number at Element: " << i << " ";
        cin >> arr[i]; // Store the input value in the array at index 'i'
    }

    // Loop to print the index of each element in the array
    for (int i = 0; i < n; i++)
    {
        cout << i << endl; // Print the index 'i'
    }

    return 0; 
}
```

### File: `3-Structure.cpp`

```cpp
#include <iostream>
using namespace std;

// Define a structure named Rectangle
struct Rectangle
{
    int length;  // Member variable to store the length of the rectangle
    int breadth; // Member variable to store the breadth of the rectangle
};

int main()
{
    // Declare and initialize a variable of type Rectangle
    struct Rectangle r = {10, 15};
    // Calculate and display the area of the rectangle
    cout << "Area of rectangle is " << r.breadth * r.length << endl;

    // Declare a variable of type Rectangle
    struct Rectangle r1;
    // Set the breadth and length of the rectangle
    r1.breadth = 10;
    r1.length = 15;
    // Calculate and display the area of the rectangle
    cout << "Area of rectangle is " << r1.breadth * r1.length << endl;

    // Declare and initialize an array of Rectangle structures
    struct Rectangle r2[2] = {{23, 15}, {20, 15}};
    // Calculate and display the area of the first rectangle in the array
    cout << "Area of rectangle is " << r2[0].breadth * r2[0].length << endl;
    // Calculate and display the area of the second rectangle in the array
    cout << "Area of rectangle is " << r2[1].breadth * r2[1].length << endl;

    return 0;
}
```

### File: `4-Pointer.cpp`

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 10; // Declare an integer variable 'a' and initialize it with the value 10
    int *p; // Declare a pointer variable 'p' that can store the address of an integer

    p = &a; // Assign the address of 'a' to the pointer 'p'

    // Print the value of 'a' directly
    cout << "Value of a (normal) is " << a << endl;

    // Print the value of 'a' using the pointer 'p'
    cout << "Value of a (Pointer) is " << *p << endl;

    // Print the address stored in the pointer 'p'
    cout << "Value of Pointer is " << p << endl;

    return 0;
}
```


### File: `5-Array-of-Pointer.cpp`

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize an array of integers with 5 elements
    int a[5] = {1, 2, 3, 4, 5};

    // Declare a pointer to an integer
    int *p;

    // Point 'p' to the first element of the array 'a'
    p = a;

    // Loop through the array using the pointer 'p'
    for (int i = 0; i < 5; i++)
    {
        // Print the value of the element at the current index
        cout << p[i] << endl;
    }

    return 0;
}
```


### File: `6-Reference.cpp`

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable 'a' and initialize it with the value 10
    int a = 10;

    // Declare a reference variable 'ref' that refers to 'a'
    int &ref = a;

    // Print the value of 'a'
    cout << "A is " << a << endl;

    // Print the value of 'ref' which is a reference to 'a'
    cout << "ref is " << ref;

    return 0;
}
```

### File: `7-Pointer-to-Structure.cpp`

```cpp
#include <iostream>
using namespace std;

// Define a structure named Rectangle
struct Rectangle
{
    int length;  // Member variable to store the length of the rectangle
    int breadth; // Member variable to store the breadth of the rectangle
};

int main()
{
    // Declare a variable of type Rectangle
    struct Rectangle r1;

    // Declare a pointer to a Rectangle and assign it the address of r1
    struct Rectangle *staticPointer = &r1;

    // Set the length of the rectangle using the pointer (Method 1)
    (*staticPointer).length = 20;

    // Set the length of the rectangle using the pointer (Method 2)
    staticPointer->length = 20;

    // Note: Both methods above achieve the same result. Method 1 uses dereferencing with parentheses,
    // while Method 2 uses the arrow operator for direct member access.

    return 0;
}
```

### File: `8-Functions.cpp`
```cpp
#include<iostream> 
using namespace std; 

int add(int a, int b /*Formal Parameters*/ ){
    int res = a + b; // Calculate the sum of a and b
    return res; // Return the result
}

int main(){
    int num1 = 10; // Initialize the first integer with value 10
    int num2 = 15; // Initialize the second integer with value 15
    int sum; // Declare a variable to store the sum

    sum = add(num1, num2 /*Actual Parameters*/ ); // Call the add function and store the result in sum
    cout << "Sum of the " << num1 << " and " << num2 << " is " << sum << endl; // Output the result
    return 0;
}
```

### File: `9-Passing-Parameter-method.cpp`
```cpp
#include<iostream>
using namespace std;

// Function to add two integers by value
int addPassingByValue(int a, int b) {
    return a + b;
}

// Function to add two integers by address
int addPassingByAddress(int *a, int *b) {
    return *a + *b;
}

// Function to add two integers by reference
int addPassingByReference(int &a, int &b) {
    return a + b;
}

int main() {
    // Declare and initialize two integers for call by value
    int num1 = 10, num2 = 10;
    // Call the function addPassingByValue and store the result in sum
    int sum = addPassingByValue(num1, num2);
    // Output the result of the addition
    cout << "Sum using call by value: " << sum << endl;

    // Declare and initialize two integers for call by address
    int num3 = 20, num4 = 20;
    // Call the function addPassingByAddress and store the result in sum
    sum = addPassingByAddress(&num3, &num4);
    // Output the result of the addition
    cout << "Sum using call by address: " << sum << endl;

    // Declare and initialize two integers for call by reference
    int num5 = 30, num6 = 30;
    // Call the function addPassingByReference and store the result in sum
    sum = addPassingByReference(num5, num6);
    // Output the result of the addition
    cout << "Sum using call by reference: " << sum << endl;

    return 0; 
}
```

### File: `10-Array-As-Parameter.cpp`

```cpp
#include <iostream>
using namespace std;
 
void arrAsParameters(int *A, int n)
{
    // Loop through each element in the array
    for (int i = 0; i < n; i++)
    {
        // Print the current element followed by a space
        cout << A[i] << " ";
    }
    // Print a newline character at the end for better readability
    cout << endl;
}

int main()
{
    // Initialize an array with 5 integers
    int A[] = {1, 2, 3, 4, 5};
    
    // Calculate the number of elements in the array
    int n = sizeof(A) / sizeof(A[0]);
    
    // Call the function to print the array elements
    arrAsParameters(A, n);
    
    return 0;
}
```

### File: `11-Structure-As-Paramenter.cpp`
```cpp
#include<iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define a structure named Rectangle
struct Rectangle
{
    int length;  // Member to store the length of the rectangle
    int breadth; // Member to store the breadth of the rectangle
};

// Function to calculate and print the area of the rectangle
// Takes a pointer to a Rectangle structure as an argument
void fun(struct Rectangle *p)
{
    // Calculate and print the area of the rectangle
    cout << p->length * p->breadth << endl;
}

int main()
{
    // Declare and initialize a Rectangle structure variable
    struct Rectangle r1 = {10, 16};
    
    // Call the function fun and pass the address of r1
    fun(&r1);
    
    return 0; 
}
```

### File: `12-Structure-and-Functions.cpp`
```cpp
#include<iostream> 
using namespace std;

// Define a structure to represent a rectangle
struct Rectangle
{
    int length;  // Length of the rectangle
    int breadth; // Breadth of the rectangle
};

// Function to initialize the dimensions of the rectangle
void init(struct Rectangle *r, int l, int b)
{
    r->length = l;    // Set the length of the rectangle
    r->breadth = b;   // Set the breadth of the rectangle
}

// Function to calculate the area of the rectangle
int area(struct Rectangle r)
{
    return r.length * r.breadth; // Return the area (length * breadth)
}

int main()
{
    struct Rectangle r; // Declare a rectangle variable
    init(&r, 10, 5);    // Initialize the rectangle with length 10 and breadth 5
    int Area = area(r); // Calculate the area of the rectangle
    cout << "Area of rectangle: " << Area << endl; // Output the area of the rectangle
    return 0; 
}
```

### File: `13-Class-And-Objects.cpp`

```cpp
#include<iostream>
using namespace std;

// Class definition for Rectangle
class Rectangle {
    private:
        int length;  // Length of the rectangle
        int breadth; // Breadth of the rectangle
    public:
        // Constructor to initialize length and breadth
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        // Function to calculate the area of the rectangle
        int area() {
            return length * breadth;
        }

        // Function to calculate the perimeter of the rectangle
        int perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    // Create a Rectangle object with length 10 and breadth 14
    Rectangle r(10, 14);

    // Calculate the area of the rectangle
    float area = r.area();

    // Calculate the perimeter of the rectangle
    float perimeter = r.perimeter();

    // Print the area of the rectangle
    cout << "Area: " << area << endl;

    // Print the perimeter of the rectangle
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
```

### File: `14-Template-Class.cpp`
```cpp
#include<iostream> // Include the input-output stream library
using namespace std;

// Template class definition
template <class T>
class Maths {
    private:
        T a, b; // Private member variables to store the two values
    public:
        // Constructor to initialize the values
        Maths(T x, T y);
        
        // Method to add the two values
        T add();
        
        // Method to subtract the two values
        T sub();
};

// Template constructor definition
template <class T>
Maths<T>::Maths(T x, T y) {
    this->a = x; // Initialize 'a' with 'x'
    this->b = y; // Initialize 'b' with 'y'
}

// Template method to add the two values
template <class T>
T Maths<T>::add() {
    return a + b; // Return the sum of 'a' and 'b'
}

// Template method to subtract the two values
template <class T>
T Maths<T>::sub() {
    return a - b; // Return the difference between 'a' and 'b'
}

int main() {
    // Create an object of Maths with int type
    Maths<int> m1(5, 3);
    
    // Create an object of Maths with float type
    Maths<float> m2(5.5, 3.2);

    // Perform addition and subtraction on the int object
    cout << "Addition (int): " << m1.add() << endl;
    cout << "Subtraction (int): " << m1.sub() << endl;

    // Perform addition and subtraction on the float object
    cout << "Addition (float): " << m2.add() << endl;
    cout << "Subtraction (float): " << m2.sub() << endl;

    return 0; 
}
```
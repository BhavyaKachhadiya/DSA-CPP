#include<iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2 * (length + breadth);
        }
};
int main(){
    Rectangle r(10,14);

    float area = r.area();
    float perimeter = r.perimeter();

    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;

    return 0;
}
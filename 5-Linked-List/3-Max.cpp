#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* first;

public:
    
    LinkedList() {
        first = nullptr;
    }

    
    void create(int A[], int n) {
        Node* last;
        first = new Node(A[0]);  
        last = first;

        for (int i = 1; i < n; i++) {
            Node* t = new Node(A[i]);  
            last->next = t;
            last = t;
        }
    }

    
    void max(){
        int max = first->data;
        Node* p = first->next;
        while (p) {
            if (p->data > max)
                max = p->data;
            p = p->next;
        }
        cout<<"max = "<<max<<endl;
    }

    void search(int key){
        Node* p = first;
        while (p) {
            if (p->data == key) {
                cout<<key<<" found at index "<<(p-first)<<endl;
                return;
            }
            p = p->next;
        }
        cout<<key<<" not found in the list"<<endl;
    }
};

int main() {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    LinkedList list;
    list.create(A, sizeof(A)/sizeof(A[0]));
    list.max();
    list.search(7);

    return 0;
}

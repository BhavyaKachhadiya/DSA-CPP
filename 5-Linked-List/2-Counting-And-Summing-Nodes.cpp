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

    
    int count() {
        int l = 0;
        Node* p = first;
        while (p) {
            l++;
            p = p->next;
        }
        return l;
    }

    
    int Rcount(Node* p) {
        if (p != nullptr)
            return Rcount(p->next) + 1;
        else
            return 0;
    }

    
    int sum() {
        int s = 0;
        Node* p = first;
        while (p != nullptr) {
            s += p->data;
            p = p->next;
        }
        return s;
    }

    
    int Rsum(Node* p) {
        if (p == nullptr)
            return 0;
        else
            return Rsum(p->next) + p->data;
    }

    
    Node* getFirst() {
        return first;
    }
};

int main() {
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    LinkedList list;
    list.create(A, 8);

    cout << "Count: " << list.count() << endl;
    cout << "Recursive Count: " << list.Rcount(list.getFirst()) << endl;
    cout << "Sum: " << list.sum() << endl;
    cout << "Recursive Sum: " << list.Rsum(list.getFirst()) << endl;

    return 0;
}

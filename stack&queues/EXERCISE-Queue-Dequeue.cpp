#include <iostream>

using namespace std;


class Node { 
    public: 
        int value;
        Node* next;
    
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};


class Queue {
    private:
        Node* first;
        Node* last;
        int length;

    public:
        Queue(int value) {
            Node* newNode = new Node(value);
            first = newNode;
            last = newNode;
            length = 1;
        }

        void printQueue() {
            Node* temp = first;
            while (temp) {
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void getFirst() {
            if (first == nullptr) {
                cout << "First: nullptr" << endl;
            } else {
                cout << "First: " << first->value << endl;
            }
        }

        void getLast() {
            if (last == nullptr) {
                cout << "Last: nullptr" << endl;
            } else { 
                cout << "Last: " << last->value << endl;
            }  
        }

        void getLength() {
            cout << "Length: " << length << endl;
        }

        bool isEmpty() {
            if (length == 0) return true;
            return false;
        }

        int firstValue() { 
            if (first) return first->value;
            return INT_MIN;
        }

        void enqueue(int value) {
            Node* newNode = new Node(value);
            if (length == 0) {
                first = newNode;
                last = newNode;
            } else {
                last->next = newNode;
                last = newNode;
            }
            length++;
        }

        // WRITE DEQUEUE MEMBER FUCTION HERE //
        //                                   //
        //                                   //
        //                                   //
        //                                   //
        //                                   //
        ///////////////////////////////////////

};



int main() {
        
    Queue* myQueue = new Queue(2);
    myQueue->enqueue(1);

    cout << "Dequeued value: " << myQueue->dequeue();
    
    cout << "\n\nDequeued value: " << myQueue->dequeue();

    cout << "\n\nDequeued value: " << myQueue->dequeue();


    /*  
        EXPECTED OUTPUT:
        ----------------
        Dequeued value: 2

        Dequeued value: 1

        Dequeued value: -2147483648

    */ 
   
}


#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* temp, * nn, * head = nullptr, * rear = nullptr;

void enqueue(int n) {
    nn = new node;
    nn->data = n;
    nn->next = nullptr;

    if (head == nullptr) {
        head = nn;
        rear = nn;
    }
    else {
        rear->next = nn;
        rear = nn;
    }

    // Make it circular by connecting the rear to the head
    rear->next = head;
}

void dequeue() {
    if (head == nullptr) {
        cout << "Queue is empty" << endl;
    }
    else {
        temp = head;
        head = head->next;
        delete temp;

        // Adjust rear to maintain circular nature
        rear->next = head;
    }
}

void display() {
    temp = head;
    if (temp == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }

    do {
        cout << temp->data << "\t";
        temp = temp->next;
    } while (temp != head);
}

int main() {
    int value;

    for (int i = 0; i < 3; ++i) {
        cout << "Enter a value to enqueue into the queue: ";
        cin >> value;
        enqueue(value);
    }

    cout << "Enqueued the elements into the circular queue" << endl;
    display();

    cout << endl;
    dequeue();
    cout << "After dequeue operation" << endl;
    display();

    return 0;
}

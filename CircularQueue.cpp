#include <iostream>
#include <string>
using namespace std;

class CircularQueue {
private:
    string* queue;
    int front;
    int rear;
    int capacity;
    int size;

public:
    // Constructor
    CircularQueue(int cap) {
        capacity = cap;
        queue = new string[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    // Destructor
    ~CircularQueue() {
        delete[] queue;
    }

    // Check if queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Check if queue is full
    bool isFull() {
        return size == capacity;
    }

    // Add element to queue (Enqueue)
    bool enqueue(string customer) {
        if (isFull()) {
            cout << "Queue is FULL! Cannot add " << customer << endl;
            return false;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % capacity;  // Circular increment
        }

        queue[rear] = customer;
        size++;
        cout << "✓ " << customer << " added to queue at position " << rear << endl;
        return true;
    }

    // Remove element from queue (Dequeue)
    string dequeue() {
        if (isEmpty()) {
            cout << "Queue is EMPTY! No customer to serve." << endl;
            return "";
        }

        string customer = queue[front];
        queue[front] = "";

        if (size == 1) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;  // Circular increment
        }

        size--;
        cout << "✓ " << customer << " served and removed from queue" << endl;
        return customer;
    }

    // Display queue status
    void display() {
        cout << "\n========== QUEUE STATUS ==========" << endl;
        cout << "Capacity: " << capacity << " | Size: " << size << endl;
        cout << "Front: " << front << " | Rear: " << rear << endl;
        cout << "Queue: [";
        
        for (int i = 0; i < capacity; i++) {
            if (queue[i].empty()) {
                cout << " EMPTY ";
            } else {
                cout << " " << queue[i] << " ";
            }
            if (i < capacity - 1) cout << "|";
        }
        cout << "]" << endl;
        cout << "Index:  ";
        for (int i = 0; i < capacity; i++) {
            cout << "   " << i << "   ";
            if (i < capacity - 1) cout << " ";
        }
        cout << "\n==================================\n" << endl;
    }

    // Get current size
    int getSize() {
        return size;
    }
};

int main() {
    cout << "========================================" << endl;
    cout << "  CIRCULAR QUEUE - Restaurant System  " << endl;
    cout << "========================================\n" << endl;

    CircularQueue restaurant(5);

    // Demonstrate circular queue operations
    cout << "--- Adding customers to waiting list ---" << endl;
    restaurant.enqueue("Alice");
    restaurant.enqueue("Bob");
    restaurant.enqueue("Charlie");
    restaurant.display();

    cout << "--- Serving customers ---" << endl;
    restaurant.dequeue();
    restaurant.dequeue();
    restaurant.display();

    cout << "--- Adding more customers (circular behavior) ---" << endl;
    restaurant.enqueue("David");
    restaurant.enqueue("Emma");
    restaurant.enqueue("Frank");
    restaurant.display();

    cout << "--- Adding when queue is full ---" << endl;
    restaurant.enqueue("George");  // This will fail
    restaurant.display();

    cout << "--- Serving one customer ---" << endl;
    restaurant.dequeue();
    restaurant.display();

    cout << "--- Now we can add George ---" << endl;
    restaurant.enqueue("George");
    restaurant.display();

    cout << "--- Serving all remaining customers ---" << endl;
    while (!restaurant.isEmpty()) {
        restaurant.dequeue();
    }
    restaurant.display();

    cout << "--- Trying to serve from empty queue ---" << endl;
    restaurant.dequeue();

    return 0;
}

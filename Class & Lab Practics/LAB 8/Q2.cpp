#include <iostream>
#define SIZE 5

class CircularQueue {
private:
    int items[SIZE], front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (front == -1) return true;
        return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            std::cout << "Queue is full\n";
        } else {
            if (front == -1) front = 0;
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            std::cout << "Inserted " << element << std::endl;
        }
    }

    int dequeue() {
        int element;
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return (-1);
        } else {
            element = items[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
            return element;
        }
    }

    void display() {
        int i;
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
        } else {
            std::cout << "Front -> " << front << std::endl;
            std::cout << "Items -> ";
            for (i = front; i != rear; i = (i + 1) % SIZE)
                std::cout << items[i] << " ";
            std::cout << items[i] << std::endl;
            std::cout << "Rear -> " << rear << std::endl;
        }
    }
};

int main() {
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    std::cout << "Deleted value = " << q.dequeue() << std::endl;
    std::cout << "Deleted value = " << q.dequeue() << std::endl;

    q.display();

    q.enqueue(6);
    q.enqueue(7);

    q.display();

    return 0;
}
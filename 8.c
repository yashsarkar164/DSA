#include<stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Overflow\n");
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = value;
        printf("Enqueued value is %d.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow\n");
        front = rear = -1;
    } else {
        printf("Dequeued: %d\n", queue[front++]);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(60);
    display();

    return 0;
}

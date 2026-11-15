#include <stdio.h>

#define CAPACITY 5

int deque[CAPACITY];
int front = -1;
int rear = -1;
int count = 0;

void insertFront(int value)
{
    if (count == CAPACITY) {
        printf("Deque is full.\n");
        return;
    }

    if (count == 0) {
        front = 0;
        rear = 0;
    } else {
        front = (front - 1 + CAPACITY) % CAPACITY;
    }
    deque[front] = value;
    count++;
    printf("%d inserted at the front.\n", value);
}

void insertRear(int value)
{
    if (count == CAPACITY) {
        printf("Deque is full.\n");
        return;
    }

    if (count == 0) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % CAPACITY;
    }
    deque[rear] = value;
    count++;
    printf("%d inserted at the rear.\n", value);
}

void deleteFront(void)
{
    if (count == 0) {
        printf("Deque is empty.\n");
        return;
    }

    printf("%d deleted from the front.\n", deque[front]);
    front = (front + 1) % CAPACITY;
    count--;
    if (count == 0) {
        front = -1;
        rear = -1;
    }
}

void deleteRear(void)
{
    if (count == 0) {
        printf("Deque is empty.\n");
        return;
    }

    printf("%d deleted from the rear.\n", deque[rear]);
    rear = (rear - 1 + CAPACITY) % CAPACITY;
    count--;
    if (count == 0) {
        front = -1;
        rear = -1;
    }
}

void displayDeque(void)
{
    int i;
    int index;

    if (count == 0) {
        printf("Deque is empty.\n");
        return;
    }

    printf("Deque (front to rear): ");
    for (i = 0; i < count; i++) {
        index = (front + i) % CAPACITY;
        printf("%d ", deque[index]);
    }
    printf("\n");
}

int main(void)
{
    int choice;
    int value;

    do {
        printf("\n1. Front insertion\n2. Rear insertion\n");
        printf("3. Front deletion\n4. Rear deletion\n");
        printf("5. Display\n0. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
        case 1:
            printf("Enter value: ");
            if (scanf("%d", &value) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            insertFront(value);
            break;
        case 2:
            printf("Enter value: ");
            if (scanf("%d", &value) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            insertRear(value);
            break;
        case 3:
            deleteFront();
            break;
        case 4:
            deleteRear();
            break;
        case 5:
            displayDeque();
            break;
        case 0:
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

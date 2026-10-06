#include <stdio.h>

#define MAX 100

int main() {
    int queue[MAX], front = 0, rear = -1;
    int choice, value;

    // Simple linear queue using an array.
    do {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == MAX - 1)
                    printf("Queue Overflow\n");
                else {
                    printf("Value: ");
                    scanf("%d", &value);
                    queue[++rear] = value;
                }
                break;

            case 2:
                if (front > rear)
                    printf("Queue Underflow\n");
                else
                    printf("Dequeued = %d\n", queue[front++]);
                break;

            case 3:
                if (front > rear)
                    printf("Queue is empty\n");
                else {
                    for (int i = front; i <= rear; i++)
                        printf("%d ", queue[i]);
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}

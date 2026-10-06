#include <stdio.h>

#define MAX 100

int main() {
    int stack[MAX], top = -1;
    int choice, value;

    // Simple menu-driven stack using an array.
    do {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == MAX - 1)
                    printf("Stack Overflow\n");
                else {
                    printf("Value: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                }
                break;

            case 2:
                if (top == -1)
                    printf("Stack Underflow\n");
                else
                    printf("Popped = %d\n", stack[top--]);
                break;

            case 3:
                if (top == -1)
                    printf("Stack is empty\n");
                else {
                    for (int i = top; i >= 0; i--)
                        printf("%d ", stack[i]);
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

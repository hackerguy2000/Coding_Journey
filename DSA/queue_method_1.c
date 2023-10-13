#include <stdio.h>
#include <conio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void Enqueue(int val)
{
    if (rear == SIZE - 1)
    {
        printf("The queue is full, cant add more element\n");
        return;
    }
    else if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = val;
    printf("The value %d inserted in the queue\n", val);
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf(" %d  ", queue[i]);
        }
    }
}
void Dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    else if (front > rear)
    {
        printf("The last element %d of the queue has been deleted\n", queue[rear]);

        front = rear = -1;
    }

    else
    {
        int deleted_val = queue[front];
        front++;
        printf("\nThe value that has been deleted from the queue is :: %d\n", deleted_val);
    }
}

int main()
{
    Enqueue(25);
    Enqueue(35);
    Enqueue(45);
    Enqueue(55);
    Enqueue(65);
    Enqueue(75);
    display();
    Dequeue(); // dequeue is happening from the front side of the queue
    display();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();

    return 0;
}
#include <stdio.h>

int heap[100];
int size = 0;

void insert(int value)
{
    int i, parent, temp;

    size++;
    i = size - 1;
    heap[i] = value;

    while (i > 0)
    {
        parent = (i - 1) / 2;

        if (heap[parent] < heap[i])
        {
            temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;

            i = parent;
        }
        else
        {
            break;
        }
    }
}

void display()
{
    int i;

    for (i = 0; i < size; i++)
        printf("%d ", heap[i]);

    printf("\n");
}

int main()
{
    int data[] = {45, 72, 30, 90, 65, 50, 85};
    int n = 7;
    int i;

    printf("Max Heap after each insertion:\n");

    for (i = 0; i < n; i++)
    {
        insert(data[i]);

        printf("After inserting %d: ", data[i]);
        display();
    }

    return 0;
}
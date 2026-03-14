#include <stdio.h>

#define SIZE 5

int main()
{
    int buffer[SIZE];
    int *head = buffer;      // points to current position
    int *start = buffer;     // start of buffer
    int *end = buffer + SIZE;

    int value;
    int i;

    while(1)
    {
        printf("Enter sensor value (-1 to stop): ");
        scanf("%d",&value);

        if(value == -1)
        break;

        *head = value;   // store value using pointer

        head++;          // move pointer to next position

        if(head == end)  // if reached end, go to start
        {
            head = start;
        }

        printf("Buffer contents: ");

        int *ptr = start;

        for(i=0;i<SIZE;i++)
        {
            printf("%d ",*ptr);
            ptr++;
        }

        printf("\n");
    }

    return 0;
}
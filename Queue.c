#include <stdio.h>
void enQueue(int *Queue, int nums)
{
    int n,front, rear;
    front = -1;
    rear = 0;

    for (int i = 0; i < nums; i++)
    {

        if (front == -1)
        {
            printf("enter the first Element:");
            scanf("%d", &n);
            front = 0;
            Queue[front] = n;
            rear++;
        }
        else
        {
            printf("enter the %d Element: ", rear + 1);
            scanf("%d", &n);
            Queue[rear] = n;
            rear++;
        }
    }
    printf("your Queue data : \n");
    for (front; front < rear; front++)
    {
        printf("\t %d", Queue[front]);
    }
}
int main()
{
    int nums;
    printf("how many element you want to insert in Queue: ");
    scanf("%d", &nums);
    int Queue[nums];
    enQueue(Queue, nums);

    return 0;
}
#include <stdio.h>
void print(int arr[], int n)
{
    printf("Element is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int temp, i = low + 1, j = high;

    do
    {
        while (arr[i] <= pivot && i<= high)
        {
            i++;
        }
        while (arr[j] > pivot && j>= low)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

  

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void quicksort(int  arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex;
        pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[11] = {6, 3, 1, 7, 99, 6, 7, 5, 1, -1, 8};
    int size = 11;
    print(arr, size);
    quicksort(arr, 0, size - 1);
    printf("\nAfter sorting the array::\n");
    print(arr, size);

    return 0;
}
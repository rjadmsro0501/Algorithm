#include <stdio.h>

void bubbleSort(int *data, int length)
{
    int temp;

    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < length - i; j++)
        {
            if (data[j - 1] > data[j])
            {
                temp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }
}

int main()
{
    int data[9] = {9, 7, 8, 6, 4, 3, 2, 5, 1};

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");

    printf("after sort = ");

    bubbleSort(data, 9);

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");

    return 0;
}
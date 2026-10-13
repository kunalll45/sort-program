#include <stdio.h>
int main()
{
    int a[100], n, i, j, key, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n1. Ascending Order");
    printf("\n2. Descending Order");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1 || choice == 2)
    {
        for (i = 1; i < n; i++)
        {
            key = a[i];
            j = i - 1;
            if (choice == 1)
            {
                while (j >= 0 && a[j] > key)
                {
                    a[j + 1] = a[j];
                    j--;
                }
            }
            else
            {
                while (j >= 0 && a[j] < key)
                {
                    a[j + 1] = a[j];
                    j--;
                }
            }
          a[j + 1] = key;
        }
        if (choice == 1)
        {
            printf("\nArray in Ascending Order:\n");
        }
        else
        {
            printf("\nArray in Descending Order:\n");
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid choice!\n");
    }
    return 0;
}

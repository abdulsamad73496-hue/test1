#include <stdio.h>

int main()
{
    int arr[100], n, x, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    /* Find appropriate position */
    pos = 0;
    while(pos < n && arr[pos] < x)
        pos++;

    /* Shift elements to the right */
    for(i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    /* Insert element */
    arr[pos] = x;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

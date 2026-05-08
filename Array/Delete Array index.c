#include <stdio.h>

int main() {
    int n, i, index;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input index to delete
    printf("Enter index to delete (0 to %d): ", n-1);
    scanf("%d", &index);

    // Check for valid index
    if(index < 0 || index >= n) {
        printf("Invalid index!\n");
    } else {
        // Shift elements to the left
        for(i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // Decrease size

        // Print updated array
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
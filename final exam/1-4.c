#include <stdio.h>

int main() {
    int i,arr[5] = {1, 2, 3, 4 , 5}; 


    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("Square of element: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i] * arr[i]);
    }
    

    return 0;
}
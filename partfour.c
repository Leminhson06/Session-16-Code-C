#include <stdio.h>

int printfarray(int *arr, int size) {
    for (int i = 0; i <size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main(){
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Cac phan tu trong mang: \n");
    printf(array, size);

    return 0;
}
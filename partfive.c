#include <stdio.h>

int updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        arr[position] = newValue;
    } else {
        printf("Vi tri %d khong hop le!\n", position);
    }
}

int printfArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu 5d: %d\n", i, arr[i]);
    }
}

int main(){
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array)/sizeof(array[0]);
    printf("Mang ban dau: \n");
    printfArray(array, size);
    int newValue = 100;
    int position = 2;
    updateElement(array, size, newValue, position);
    printf("\nMang sau khi cap nhat: \n");
    printfArray(array, size);

    return 0;
}

#include <stdio.h>

int main(){
    int x = 42;
    int *ptr = &x;
    printf("\n");
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)ptr);
    return 0;
}
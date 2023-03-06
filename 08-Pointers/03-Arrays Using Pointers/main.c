#include <stdio.h>

#define max_size 100

int main() {
    int arr[max_size];
    int *ptr, num;
    ptr = &arr;

    printf("Enter array size: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        printf("%d : ", i+1);
        scanf("%d", ptr+i);
    }

    printf("\n");
    for (int i = 0; i < num; i++) {
        printf("%d ", *(ptr+i));
    }
    return 0;
}

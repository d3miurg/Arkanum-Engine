#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("a < b\n");
    } else if (a > b) {
        printf("a > b\n");
    } else {
        printf("a = b\n");
    }

    switch (a) {
        case 1:
            printf("Variant 1\n");
            break;
        case 2:
            printf("Variant 2\n");
            break;
        case 3:
            printf("Variant 3\n");
            break;
        default: 
            printf("Defalult variant\n");
            break;
    }

    if (a == 1) {
        printf("Variant 1\n");
    } else if (a == 2) {
        printf("Variant 2\n");
    } else if (a == 3) {
        printf("Variant 3\n");
    } else {
        printf("Defalult variant\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int number;

    // 弄俱计
    printf("Enter an integer: ");
    scanf_s("%d", &number);  // ㄏノ scanf_s

    // ㄏノ緇计笲衡才耞案
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    }
    else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
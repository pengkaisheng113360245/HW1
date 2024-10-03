#include <stdio.h>

int main() {
    int num1, num2;

    // 讀取兩個整數
    printf("Enter two integers: ");
    scanf_s("%d %d", &num1, &num2);  // 使用 scanf_s

    // 判斷 num1 是否為 num2 的倍數
    if (num2 != 0) { // 確保不除以零
        if (num1 % num2 == 0) {
            printf("%d is a multiple of %d.\n", num1, num2);
        }
        else {
            printf("%d is not a multiple of %d.\n", num1, num2);
        }
    }
    else {
        printf("The second number cannot be zero.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int number;

    // 讀取一個整數
    printf("Enter an integer: ");
    scanf_s("%d", &number);  // 使用 scanf_s

    // 使用餘數運算符判斷奇偶
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    }
    else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
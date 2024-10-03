#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // 弄俱计
    printf("Enter three integers: ");
    scanf_s("%d %d %d", &num1, &num2, &num3);

    // 安砞 num1 程㎝程
    largest = num1;
    smallest = num1;

    // ゑ耕 num2 ㎝讽玡程程
    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }

    // ゑ耕 num3 ㎝讽玡程程
    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    // 块挡狦程㎝程陪ボ︽
    printf("Largest: %d, Smallest: %d\n", largest, smallest);

    return 0;
}
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // Ū���T�Ӿ��
    printf("Enter three integers: ");
    scanf_s("%d %d %d", &num1, &num2, &num3);

    // ���] num1 ���̤j�M�̤p��
    largest = num1;
    smallest = num1;

    // ��� num2 �M��e�̤j�̤p��
    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }

    // ��� num3 �M��e�̤j�̤p��
    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    // ��X���G�A�̤j�M�̤p����ܦb�P�@��
    printf("Largest: %d, Smallest: %d\n", largest, smallest);

    return 0;
}
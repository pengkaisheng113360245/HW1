#include <stdio.h>

int main() {
    int num1, num2;

    // Ū����Ӿ��
    printf("Enter two integers: ");
    scanf_s("%d %d", &num1, &num2);  // �ϥ� scanf_s

    // �P�_ num1 �O�_�� num2 ������
    if (num2 != 0) { // �T�O�����H�s
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
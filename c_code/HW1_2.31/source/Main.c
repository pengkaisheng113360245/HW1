#include <stdio.h>

int main() {
    // ���L���Y
    printf("Number\tSquare\tCube\n");
    printf("-------------------------\n");

    // �`���q 0 �� 10
    for (int i = 0; i <= 10; i++) {
        int square = i * i;       // �p�⥭��
        int cube = i * i * i;     // �p��ߤ�
        printf("%d\t%d\t%d\n", i, square, cube); // ���L�Ʀr�B����M�ߤ�
    }

    return 0;
}
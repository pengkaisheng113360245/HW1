#include <stdio.h>

int main() {
    // 打印表頭
    printf("Number\tSquare\tCube\n");
    printf("-------------------------\n");

    // 循環從 0 到 10
    for (int i = 0; i <= 10; i++) {
        int square = i * i;       // 計算平方
        int cube = i * i * i;     // 計算立方
        printf("%d\t%d\t%d\n", i, square, cube); // 打印數字、平方和立方
    }

    return 0;
}
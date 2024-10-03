#include <stdio.h>

int main() {
    // 定義變數
    double weightInPounds, heightInInches, bmi;

    // 讀取用戶輸入的體重和身高
    printf("Enter your weight in pounds: ");
    scanf_s("%lf", &weightInPounds); // 使用 scanf_s
    printf("Enter your height in inches: ");
    scanf_s("%lf", &heightInInches); // 使用 scanf_s

    // 計算 BMI
    bmi = (weightInPounds * 703) / (heightInInches * heightInInches);

    // 顯示 BMI
    printf("Your BMI is: %.2lf\n", bmi);

    // 根據 BMI 顯示評估標準
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    // 評估 BMI 範圍
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 25) {
        printf("You are normal weight.\n");
    }
    else if (bmi >= 25 && bmi < 30) {
        printf("You are overweight.\n");
    }
    else {
        printf("You are obese.\n");
    }

    return 0;
}
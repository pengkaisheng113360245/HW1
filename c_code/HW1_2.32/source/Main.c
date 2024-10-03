#include <stdio.h>

int main() {
    // �w�q�ܼ�
    double weightInPounds, heightInInches, bmi;

    // Ū���Τ��J���魫�M����
    printf("Enter your weight in pounds: ");
    scanf_s("%lf", &weightInPounds); // �ϥ� scanf_s
    printf("Enter your height in inches: ");
    scanf_s("%lf", &heightInInches); // �ϥ� scanf_s

    // �p�� BMI
    bmi = (weightInPounds * 703) / (heightInInches * heightInInches);

    // ��� BMI
    printf("Your BMI is: %.2lf\n", bmi);

    // �ھ� BMI ��ܵ����з�
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    // ���� BMI �d��
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // �w�q�ܼ�
    double totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls;
    double dailyDrivingCost;

    // Ū���Τ��J���ƾ�
    printf("Enter total miles driven per day: ");
    scanf("%lf", &totalMiles);

    printf("Enter cost per gallon of gasoline: ");
    scanf("%lf", &costPerGallon);

    printf("Enter average miles per gallon: ");
    scanf("%lf", &milesPerGallon);

    printf("Enter parking fees per day: ");
    scanf("%lf", &parkingFees);

    printf("Enter tolls per day: ");
    scanf("%lf", &tolls);

    // �p��C�Ѫ��r�p����
    double gasolineCost = (totalMiles / milesPerGallon) * costPerGallon; // �C��T�o�O��
    dailyDrivingCost = gasolineCost + parkingFees + tolls; // �`����

    // ��ܨC��r�p����
    printf("Your daily driving cost is: $%.2lf\n", dailyDrivingCost);

    return 0;
}
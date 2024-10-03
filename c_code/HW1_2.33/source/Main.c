#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 定義變數
    double totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls;
    double dailyDrivingCost;

    // 讀取用戶輸入的數據
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

    // 計算每天的駕駛成本
    double gasolineCost = (totalMiles / milesPerGallon) * costPerGallon; // 每日汽油費用
    dailyDrivingCost = gasolineCost + parkingFees + tolls; // 總成本

    // 顯示每日駕駛成本
    printf("Your daily driving cost is: $%.2lf\n", dailyDrivingCost);

    return 0;
}
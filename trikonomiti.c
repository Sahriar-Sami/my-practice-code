#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the value of coordinate A: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the value of coordinate B: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the value of coordinate C: ");
    scanf("%f %f", &x3, &y3);

    float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Calculate the angles in radians
    float A = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));
    float B = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
    float C = acos((pow(b, 2) + pow(a, 2) - pow(c, 2)) / (2 * b * a));

    // Check if angles are NaN or outside the valid range
    if (isnan(A) || A < 0 || A > M_PI) {
        printf("Invalid input or calculation for angle A.\n");
    } else {
        printf("the value of angle A is: %f\n", A);
    }
    if (isnan(B) || B < 0 || B > M_PI) {
        printf("Invalid input or calculation for angle B.\n");
    } else {
        printf("the value of angle B is: %f\n", B);
    }
    if (isnan(C) || C < 0 || C > M_PI) {
        printf("Invalid input or calculation for angle C.\n");
    } else {
        printf("the value of angle C is: %f\n", C);
    }

    return 0;
}

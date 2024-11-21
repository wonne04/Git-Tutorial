#include <stdio.h>
#include <math.h>

int main() {
    double numbers[5];
    double sum = 0.0, mean, variance = 0.0, std_dev;

    printf("Enter 5 real numbers: ");

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / 5;

    for (int i = 0; i < 5; i++) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= 5;

    std_dev = sqrt(variance);
    printf("Standard Deviation = %.3lf\n", std_dev);

    return 0;
}

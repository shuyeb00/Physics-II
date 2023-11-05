#include <stdio.h>
#include <math.h>
#define group3();

int main()
{
    group3();

    double lambda,m,a1,a2,a3;

    printf("Wavelength(nm): ");
    scanf("%lf",&lambda);

    while (!(lambda >= 380 && lambda <= 750))
    {
        printf("Out of the range. Please enter a valid number\n");
        printf("\nWavelength(nm): ");
        scanf("%lf",&lambda);
    }

    printf("Order: ");
    scanf("%lf",&m);

    printf("a1,a2 &a3 (mcro meter): ");
    scanf("%lf %lf %lf", &a1, &a2, &a3);

    a1 = a1*1000;  // Micro to Nano
    a2 = a2*1000;
    a3 = a3*1000;

    double theta_1 = asin(m*lambda/a1);  // rad
    double theta_2 = asin(m*lambda/a2);
    double theta_3 = asin(m*lambda/a3);

    theta_1 = theta_1 * 180.0/M_PI; // degree
    theta_2 = theta_2 * 180.0/M_PI;
    theta_3 = theta_3 * 180.0/M_PI;

    if (theta_1 > theta_2 && theta_1 > theta_3)
    {
        printf("a1");
    }
    else if (theta_2 > theta_1 && theta_2 > theta_3)
    {
        printf("a2");
    }
    else
    {
        printf("a3");
    }

    return 0;
}




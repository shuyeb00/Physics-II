#include<stdio.h>
#include<math.h>
#define group3()

int main()
{
    group3();

    double m1 = 3.0,lambda1 = 530.0,theta1 = 65.0;
    double m2 = 2.0,lambda2 = 700.0;

    double d = (m1*lambda1)/sin(theta1*M_PI/180.0);

    double theta2 = asin((m2*lambda2)/d);
    theta2 = theta2*180.0/M_PI;  //degree

    printf("%.2lf Degree",theta2);

}


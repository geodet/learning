#include <stdio.h>

main() {
    double a=0;
    double b=0;
    double area=0;

    printf("\n** Compute the area of rectangle **\n\n");
    length : printf("Input length :");
    scanf("%lf",&a);

    if (a<=0) {
        printf("Error!, your number must be bigger than Zero\n\n");
        goto length;
    }

    width : printf("Input width :");
    scanf("%lf",&b);

     if (b<=0) {
        printf("Error!, your number must be bigger than Zero\n\n");
        goto width;
    }

    area = (a*b);

    printf("\nArea of rectangle = %f sqrmeter \n\n",area);

    printf("Author : Milad Khakpour - e1229629\n\n");

}

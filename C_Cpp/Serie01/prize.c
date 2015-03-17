#include <stdio.h>

main() {

    double x=0;
    int n=0;
    double y=0;

    money : printf("\n\nMoney you win : ");
    scanf("%lf",&x);

    if (x<=0) {
        printf("\n ** Error ! - Data must be positive **\n\n");
        goto money;
    }

    printf("Number of friends : ");
    scanf("%d",&n);

    if (n>0) {
        y = x/(n + 1);
        printf("\n%f for each person !\n\n",y);
    }
    else {
        if (n==0)
            printf("\nThere is no friend to share your prize !\n\n");
        else
            printf("\n ** Error ! - The number of your friends and money must be positive ! **\n\n");
    }

    printf("Author : Milad Khakpour - e1229629\n\n");
}


#include <stdio.h>

double dabs(double x) {
  if(x<0)
    return -x;
  else
    return x;
}

main() {
  double x=0;
  printf("Input = ");
  scanf("%lf",&x);
  printf("|x| = %f\n" ,dabs(x));
}

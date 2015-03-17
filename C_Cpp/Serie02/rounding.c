#include <stdio.h>
#include <math.h>

int rounding(double x) {
   int a=0;
   a=(int)x;
   if(x<(a+0.5))
    return a;
   else
    return a+1;
}


main() {
  double x=0;
  printf("** Rounding **\n");
 input :
  printf("Input X = ");
  scanf("%lf",&x);
  if (x<0) {
    printf("Error ! - Input must be bigger than zero \n");
  goto input;
  }
  else
    printf("Round of x is %d\n",rounding(x));
}

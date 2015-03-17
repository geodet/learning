#include <stdio.h>
#include <math.h>

double member(double n) {
  if (n<=0)
    return -1;
  else {
    if (n>1)
      return ((pow(-1,n)/n)+ member(n-1));
    else
      return -1;
  }
}
main() {
  int n=0;
  printf("Input = ");
  scanf("%d",&n);
  if (n<=0)
    printf("Error !\n");
  else
  printf("result = %f\n", member(n));
}


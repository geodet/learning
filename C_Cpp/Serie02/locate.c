#include <stdio.h>

double locate(double dist, double r) {
  if(dist<r*r)
    return -1;
  if(dist>r*r)
    return 1;
  else
    return 0;
}
main() {
  double x,y,u,v,r,dist=0;
  printf("Enter the center of Circle\n");
  printf("x =");
  scanf("%lf",&x);
  printf("y =");
  scanf("%lf",&y);
  printf("\nEnter the radius of circle :\n");
 ra:printf("r = ");
  scanf("%lf",&r);
  if(r<0) {
    printf("\nError ! - Radius must be bigger than zero");
    goto ra;
  }
  printf("\nEnter the optional coordiante :\nu =");
  scanf("%lf",&u);
  printf("v =");
  scanf("%lf",&v);
  dist = (x-u)*(x-u)+(y-v)*(y-v);
  printf("The result is : %f", locate(dist,r));
}

#include <stdio.h>

double points(double x,double y,double u,double v,double a,double b){
  double compute1,compute2=0;
  compute1=((y-v)/(x-u));
  compute2=((y-b)/(x-a));
  if(compute1==compute2)
    return 1;
  else
    return 0;
}
main(){
  double x,y,u,v,a,b,z=0;
    printf("First point (x,y) - seperated by a blank space\n");
    scanf("%lf %lf",&x,&y);
    printf("Second point (u,v) - seperated by a blank space\n");
    scanf("%lf %lf",&u,&v);
    printf("Third point (a,b) - seperated by a blank space\n");
    scanf("%lf %lf",&a,&b);
    z=points(x,y,u,v,a,b);
    if(z==1)
      printf("They are in the same line\n");
    else
      printf("They are not in the same line\n");
}

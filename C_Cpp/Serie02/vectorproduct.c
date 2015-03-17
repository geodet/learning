#include <stdio.h>

void vectorproduct(double u[3], double v[3], double w[3]) {
  w[0] = (u[1]*v[2])-(u[2]*v[1]);
  w[1] = (u[2]*v[0])-(u[0]*v[2]);
  w[2] = (u[0]*v[1])-(u[1]*v[0]);
  printf("Vectorproduction W = (%f, %f, %f)\n", w[0], w[1], w[2]);
}

main() {
  double u[3]={0, 0, 0};
  double v[3]={0, 0, 0};
  double w[3]={0, 0, 0};

  printf("Enter three components of vector u, seperated by a blank space\n");
  scanf("%lf %lf %lf", &u[0], &u[1], &u[2]);

  printf("Enter three components of vector v, seperated by a blank space\n");
  scanf("%lf %lf %lf", &v[0], &v[1], &v[2]);
  vectorproduct(u, v, w);
 }

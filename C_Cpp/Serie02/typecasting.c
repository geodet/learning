#include <stdio.h>

main() {
  int x = 1;
  int y = 5;

  double erg1 = x / y;
  double erg2 = (double) x / y;
  double erg3 = 1. / 5;
  int erg4 = (double) x / y;

  printf("erg1 = %f\n",erg1);
  printf("erg2 = %f\n",erg2);
  printf("erg3 = %f\n",erg3);
  printf("erg4 = %d\n",erg4);
}

/* Type-Casting : C allows programmers to perform typecasting by placing the type name in parentheses and placing this in front of the value.

For instance:

main()
{
float a;
a = (float)5 / 3;
}

Type Cating :
Type casting is a way to convert a variable from one data type to another data type. For example, if you want to store a long value into a simple integer then you can type cast long to int. You can convert values from one type to another explicitly using the cast operator as follows:
(type_name) expression
source : http://www.tutorialspoint.com/cprogramming/c_type_casting.htm

-----------

 Q: our output :

 erg1 = 0.000000 because at first we divide to integers and the result is 0 and then we convert it from integer to doubel, means 0.000000
 erg2 = 0.200000 because at first we change the integer x to double and then we copute divide , means result of divide is double
 erg3 = 0.200000 exaclty like erg2 but in other way we used a "." to convert the integer to double
 erg4 = 0 result of divide is double (.200000) but we wanted the erg4 as a integer then it changed to 0 from 0.200000

*/

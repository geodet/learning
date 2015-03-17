#include<stdio.h>

main() {
int d,m,y,z=0;

input:
printf("Enter the Date Month and Year - (press enter after you entered fo each Date, Month and year)\n");
scanf("%d %d %d",&d,&m,&y);
 if(m==2){
   if((d>28)&&(y%4!=0)){
   printf("The maximumvalue is 28 for february\n");
     goto input;
     }
     if((d>29)&&(y%4==0)){
     printf("The maximumvalue is 29 for february (Leap year)\n");
     goto input;
     }
     }
 else if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)){
    if(d>31){
    printf("The maximum value is 31\n");
    goto input;
    }
    }
 else if(((m==4)||(m==6)||(m==9)||(m==11))&&(d>30)){
      printf("The maximum value is 30\n");
      goto input;
      }
 else if((d>31)){
printf("Enter valid date\n");
goto input;
}
if((d<1)||(m<1)){
printf("Enter positive valid data\n");
goto input;
}
}

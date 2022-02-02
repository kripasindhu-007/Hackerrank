#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int num1,num2;
 float num3,num4;
 scanf("%d %d",&num1,&num2);
 scanf("%f %f",&num3,&num4);
 int sum0=num1+num2;
 int diff0=num1-num2;
 float sum1=num3+num4;
 float diff1=num3-num4;
 printf("%d %d\n",sum0,diff0);
 printf("%.1f %.1f\n",sum1,diff1);	
    
    return 0;
}
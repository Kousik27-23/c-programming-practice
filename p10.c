#include<stdio.h>
int main()
{
float temp,cel;
printf("Enter temperature: ");
scanf("%f",&temp);
cel=(temp-32)*5/9;
printf("celcius is:%f",cel);
return 0;
}
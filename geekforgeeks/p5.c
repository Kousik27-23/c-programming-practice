#include<stdio.h>
int main()
{
 int num,k=0;
 printf("Enter number: ");
 scanf("%d",&num);
 for (int i = 1; i <=num; i++)
 {
    if (num%i==0)
    {
        k+=1;
    }
 }
    if (k==2)
    {
        printf("prime");
    }
    else
    printf("not prime");
    
    
 

 
return 0;
}
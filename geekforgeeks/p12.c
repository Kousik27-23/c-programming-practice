#include<stdio.h>
int main()
{
int n,k=0;
printf("Enter number:");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    if (n%i==0)
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
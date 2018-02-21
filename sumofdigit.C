#include<stdio.h>
int main()
{
int num,digit,sum=0;
printf("\nEnter the number:");
scanf("%d",&num);
while(num!=0)
{
digit=num%10;
sum=sum+digit;
num=num/10;
}
printf("\nThe sum of digit is:%d",sum);
return 0;
}

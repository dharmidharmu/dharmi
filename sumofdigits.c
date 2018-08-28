//sum of digits
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,temp,sum=0;

    printf("enter the number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        temp=a%10;
        sum+=temp;
        a=a/10;
    }
    printf("sum of digits is %d",sum);

}

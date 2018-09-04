#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,*ab,*cd;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    ab=&a;
    cd=&b;
    c=a+b;
    d=*ab+*cd;

    printf("sum using values is %d\n",c);
    printf("sum using pointers is %d\n",d);

}

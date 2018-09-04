#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j=1,*p;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("the array elements and their addresses are\n");
    p=&a[0][0];
    for(i=0;i<9;i++,j++)
    {
        printf("%d  [%5u]",*(p),p);
        p++;
        if(j==3)
        {
            printf("\n");
            j=0;
        }
    }

}

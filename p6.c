#include<stdio.h>
#include<conio.h>
void main()
{
    int *arr1[3],*p;
    printf("%u\n",arr1);

    int *arr2[3]={1,2,3},k;
    p=&arr1[0];

    printf("%u\n",arr2);
    for(k=0;k<3;k++)
    {
        arr1[k]=arr2+k;
        printf("%u\n",arr1[k]);

    }
    printf("\n\tAddress1 Address2 Element\n");
    for(k=0;k<3;k++)
    {
        printf("\t%u",p);
        p++;
        printf("\t%u",arr1[k]);
        printf("\t%d\n",*(arr1[k]));
    }
}

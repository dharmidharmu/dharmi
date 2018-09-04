#include<stdio.h>
#include<conio.h>
void main()
{
    int arr1[]={1,2,3,4,5},arr2[5],i;
    printf("\nOriginal Array Reversed Array");
    for(i=0;i<5;i++)
    {
        arr2[i]=arr1[4-i];
        printf("\n\t%d\t\t%d",arr1[i],arr2[i]);

    }
}

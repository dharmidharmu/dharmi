/*Shortest Continuous Recurring string
Max XPs : 50
Problem Statement
You are given a fraction of the form P/Q where P and Q are positive integers. Find the length of the shortest continuous repeating string in the decimal part. In case the the decimal part is not recurring print -1.
Input
The first line of input contains T, the number of test cases.

The next T lines contain each test case containing two space separated positive integers P and Q.
Output
Output length of the shortest continuous repeating string in the decimal part of P/Q.
Constraints
0< T< 12000
0< P< 14000
0< Q< 14000
Sample Input
4
1 1
2 4
20 30
1 7
Sample Output
-1
-1
1
6
Explanation of Sample Case
1/1 has no recurring decimal so -1
2/4 has no recurring decimal so -1
the decimal representation of 20/30 is 0.6666666.... so the shortest continuous recurring part has length 1 (the string being 6)
the decimal representation of 1/7 is 0.14285714285.. so the shortest continuous recurring string  is 142857 and the length is 6.*/
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int t, p, q;
    scanf("%d", &t);
    while(t--) {

    	int *arr = calloc(14000, sizeof(int));
    	int pos = 0;

    	scanf("%d%d",&p, &q);

 		int r = p % q;
 		printf("%d\n",r);

 		while(r != 0) {
 			r = (r * 10) % q;
 			printf("%d\n",r);
 			if(arr[r] != 0) {
            printf("the no. of occurences\n");
 				printf("%d\n", ++pos - arr[r]);
 				break;
 			}
 			else
 				arr[r] = ++pos;
 		}
 		if(r == 0) {
 			printf("-1\n");
 		}
 		free(arr);
    }
    return 0;
}*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int n,p,q;
    cout<<"Enter no. of test cases"<<endl;
    cin>>n;
    while(n--)
    {
        cout<<"enter the value of p and q"<<endl;
        cin>>p>>q;
        int *arr=(int *)calloc(14000,sizeof(int));
        int r=p%q;
        int pos=0;
        while(r!=0)
        {
            r=r*10%q;
            if(arr[r]!=0)
            {
                cout<<++pos-arr[r]<<endl;
 				break;

            }
            else
            {
                arr[r]=++pos;
            }

        }
        if(r == 0) {

    cout<<"-1"<<endl;
 		}
 		free(arr);
    }
}

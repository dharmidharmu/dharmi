/*Sum of Prime Numbers
Max XPs : 40
Problem Statement
Given a number n, the purpose of this problem is to find if the number can be expressed as a sum of two prime numbers.

For example:
7 can be expressed as a sum of two prime numbers - 5 and 2.
10 can be expressed as a sum of two prime numbers - 5 and 5, or 7 and 3.
11 cannot be expressed as a sum of two prime numbers, because there are no two prime numbers which add to 11.
Input
The input takes a single number N.
Output
For the given number N, print true if the number can be expressed as a sum of two primes, false if the number cannot be expressed as a sum of two prime numbers
Constraints
0
Sample Input
7
Sample Output
true
Explanation of Sample Case
The output is true for 7, because 7 can be expressed as a sum of two prime numbers (5 & 2).*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],temp=1;
     for(int i=2;i<=n;i++)
    {
        int c=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==1)
        {
            a[temp]=i;
            temp++;
        }
    }
    for(int i=1;i<=temp-1;i++)
    {
        for(int j=1;j<=temp-1;j++)
        {
            if(a[i]+a[j]==n)
            {
             cout<<"true";
             return 0;


        }
    }
}
}

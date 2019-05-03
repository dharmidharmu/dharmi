/*Sum of Digits
Max XPs : 60
Problem Statement
You have given two numbers m and n. Find the sum of digits of numbers m+1, m+2,...,n.
Input
first line contains t, representing test case. Next t lines, each contain m and n.
Output
output t lines containing answer for each test case.
Constraints
1 <= t <= 1e5
1 <= n <= 1e18
Sample Input
2
1 3
1 10
Sample Output
5
45
Explanation of Sample Case
In first test case, sum of 2 and 3 is 5.
In Second test case, sum from 2 to 9 is 44 and sum of digits of 10 is 1. so 44 + 1 = 45.*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m[1000],n[1000];
    for(int i=1;i<=t;i++)
    {
        cin>>m[i];
        cin>>n[i];
    }
    int sum,total,temp;
    for(int i=1;i<=t;i++)
    {
        total=0;

        for(int j=m[i]+1;j<=n[i];j++)
        {
            temp=j;

            sum=0;
            while (temp!= 0)
    {
        sum = sum + temp % 10;
        temp = temp / 10;
    }
    total=total+sum;
        }

        cout<<total<<"\n";

    }
}

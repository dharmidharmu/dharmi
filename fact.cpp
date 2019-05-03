/*Problem Statement
Given number n, find the factorial of that number.
Input
First line contains t, number of test cases, followed by t lines, each containing N.
Output
Output factorial for each N.
Constraints
1 <= t <= 100
1 <= N <= 100
Sample Input
3
1
2
3
Sample Output
1
2
6
Explanation of Sample Case
Factorial of 1, 2, 3 are 1, 2, 6 respectively.*/
#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    int y;
    for(int i=0;i<t;i++)
    {
        y=0;
        y=fact(a[i]);
        cout<<y<<"\n";
    }
}

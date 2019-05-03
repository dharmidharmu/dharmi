/*List Reversal with Array Pointers
Max XPs : 20
Problem Statement
Read a list of numbers and print them in reverse order without using the array accessor a[5] or a[1] etc.
You can use arrays, but not access individual elements using the square bracket accessor.
Input
The first line will represent the number of test cases T.

Each test case is represented by two lines. The first line represents the number of elements in the list.
The second line represents the elements in that list separated by space.
Output
The output will contain T lines. Each contains the reversed list for that test case.
Make sure there is no trailing space after every line, and the output ends with a new line character (\n)
Constraints
000
Sample Input
2
4
33 54 1 100
1
5
Sample Output
100 1 54 33
5
Explanation of Sample Case
There are two test cases. The first test case has 4 elements, and the second has 1 element.
The first list is reversed to 100, 1, 54, 33, and the second list has one number 5 which remains as it is.*/
#include<iostream>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    int a[n];
    a[1]=1;
    int i=1;
    cout<<(a+i)<<"\n";
    cout<<*(a+i)<<"\n";
    cout<<*(i+a)<<"\n";
    cout<<a[i]<<"\n";
    cout<<i[a]<<"\n";
    return 0;
}*/
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        int a[m],*b[m];
        for(int i=1;i<=m;i++)
        {
            cin>>a[i];
            b[i]=&a[i];


        }
        for(int i=m;i>=1;i--)
        {
            cout<<*(b+i)<<"\t";
            cout<<*(*(b+i))<<"\t";
        }
    }
}

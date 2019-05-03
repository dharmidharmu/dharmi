/*Problem Statement
A Christmas Triangle is defined as follows -
1. A line number k will contain k characters. So the first line will contain 1 character, second will contain 2, etc.
2. It should be printed so that it forms an isosceles triangle facing upwards.
3. Odd lines should be made of the '*' character, and even lines should be made of the '-' character.
4. Each character should be separated by a space.

To make it easier to understand, the following is a Christmas triangle of size 5 -
    *
   - -
  * * *
 - - - -
* * * * *


Write a program to create a Christmas Triangle of size 15.
Input
-
Output
The output will just contain the Christmas Triangle described above of size 15.
Ensure that there is no trailing space after each line of the output.
Ensure that there is a new line character (\n) at the end of the output.
Constraints
-
Sample Input
--
Sample Output
The triangle should look like the one below, upto 15 lines.
    *
   - -
  * * *
Explanation of Sample Case
-*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n-1;j++)
            cout<<" ";
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)
                cout<<"-"<<" ";

        }
        else
        {
            for(int j=1;j<=i;j++)
                cout<<"*"<<" ";
        }
        cout<<"\n";
    }

}

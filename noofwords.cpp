/*Number of words
Max XPs : 30
Problem Statement
You are given t test cases, for each test case you have a line and you have to tell the number of words in the line.
Input
Number of test cases t followed by t lines
Output
the number of words in each test case with a trailing "\n" (newline)
Constraints
number of characters in each line is less than 1000
Sample Input
3
I knew it from the beginning
programming used to be hard earlier
now programming is fun
Sample Output
6
6
4
Explanation of Sample Case
There are 3 test cases  as given in line 1
line one has 6 words
line two has 6 words
line three has 4 words
so the output is
6
6
4*/
#include<iostream>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
         getline(cin>>ws,str);
        int words=1;

        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]==' ')
            {
                words++;
            }
        }
        cout<<words<<"\n";
    }
    return 0;
}*/
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char str[100];


       cin.getline(str,100);
       char *p=str;


        int words=1;
        while(*p!='\0')
        {
            if(*p==' ')
                words++;
            p++;
        }
        cout<<words<<"\n";
    }
}

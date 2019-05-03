/*String-Similarity
Max XPs : 100
Problem Statement
For two strings A and B, we define the similarity of the strings to be the length of the longest prefix common to both strings. For example, the similarity of strings "abc" and "abd" is 2, while the similarity of strings "aaa" and "aaab" is 3.

Calculate the sum of similarities of a string S with each of it's suffixes.
Input
First Line Contains t, representing test cases followed by t lines each containing string.
Output
output t lines for each input testcase.
Constraints
t <= 100
length of string <= 100000
Sample Input
2
ababaa
aa
Sample Output
11
3
Explanation of Sample Case
For the first case, the suffixes of the string are "ababaa", "babaa", "abaa", "baa", "aa" and "a". The similarities of these strings with the string "ababaa" are 6,0,3,0,1, & 1 respectively. Thus, the answer is 6 + 0 + 3 + 0 + 1 + 1 = 11.

For the second case, the answer is 2 + 1 = 3.*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of test cases"<<endl;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int sum=0,count;
        for(int i=0;i<str.size();i++)
        {
            count=0;
            for(int j=i,t=0;j<str.size();t++,j++)
            {
                if(str[t]==str[j])
                    count++;
                else
                    break;
            }
            sum+=count;
        }
        cout<<"the result is"<<endl;
        cout<<sum<<endl;
    }
}

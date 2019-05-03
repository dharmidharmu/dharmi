/*Palindrome
Max XPs : 20
Problem Statement
You have given two strings. Check whether they are palindrome or not.
Input
First line contains an integer t, number of test cases followed by t lines each containing two strings.
Output
Output the solution in a line for every test case. Output can be "PALINDROME" or "NOT"
Constraints
length of strings <= 10^5
Sample Input
1
abba ab
Sample Output
PALINDROME NOT
Explanation of Sample Case
abba is a palindromic string as left half's reverse is equal to right half of the string. ab is not a palindrome.
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
    std::cout << *it;
  std::cout << '\n';

  return 0;
}*/

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of strings\n";
    cin>>n;
    while(n--)
    {
        string str;
        cout<<"enter the string\n";
        cin>>str;

        int leng=str.length();
        cout<<leng<<"\n";
        int m=leng-1;


        for(int i=0;i<str.length();i++,m--)
        {
            if(m>=i)
            {


            if(str[i]==str[m])
            {


                if(m==i+1|| m==i)
                {
                    cout<<"PALINDROME"<<"\n";
                }
                else
                    continue;

            }



            }
             else
            {


                cout<<"NO"<<"\n";
                break;
            }


        }

    }
}
*/
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter the sentence"<<"\n";
    getline(cin>>ws,str);
    int n=0,v;
    int i,a;
    string str1;

    do
    {
        i=n;
        v=n;
        int temp=i;
        while(str[temp]!=' ')
            {

                temp++;


        }
        int n=temp+1;
        int m=temp-1;
        a=0;


        while(i<=m)
        {
            str1[a]=str[i];
            a++;
            i++;
        }
        str1[a]='\0';
        int  temp1=str.length();
        int q=temp1-1;

        for(int j=0;j<str1.length();j++)
        {


        if(q>=j)
            {


            if(str[j]==str[q])
            {


                if(q==j+1|| q==j)
                {
                    cout<<"PALINDROME\t"<<"\n";
                }
                else
                    continue;

            }



            }
             else
            {


                cout<<"NO\t"<<"\n";
                break;
            }


        }

    }while(i<str.length());
}



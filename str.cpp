#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,l,count=0;
    string str;
    cout<<"enter the string\n";
    getline(cin,str);
    l=str.length();
    for(i=0;i<l;i++)
    {
        if(str.at(i)=='I' && str.at(i+1)=='t')
        {
            count++;
        }
    }
    cout<<"count is "<<count;

}

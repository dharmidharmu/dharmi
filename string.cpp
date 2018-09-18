#include<iostream>
#include<string>



using namespace std;
int main()
{
    string s1,s2,s3,s4;
    cout<<"enter the string\n";
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    cout<<s1;
    s2=s2+s3;
    s4=s1.append(s2);
    cout<<"the concatenated string is"<<s4;
    return 0;
}

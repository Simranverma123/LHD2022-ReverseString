//Simran Verma   LHD day2 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string str;
string Rev="";
cout<<"Enter the string";
getline(cin,str);

int n=str.length();
for(int i=n-1;i>=0;i--)
{
 Rev=Rev+str[i];
}
cout<<Rev;
return 0;
}

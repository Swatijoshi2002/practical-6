#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,s1;
  cin>>s;
cin>>s1;
  if(s.length()!=s1.length())
{
  cout<<"strings are not equal";
}
int c=0;
for(int i=0,j=0;i<s.length();i++,j++)
{
  if(s[i]!=s1[j])
{
  cout<<"strings are not equal";
c=1;
break;
}
}
if(c==0)
cout<<"strings are equal";
}

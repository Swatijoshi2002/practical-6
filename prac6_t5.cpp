#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,s1;
  cin>>s;
cin>>s1;
int c=s.compare(s1);
if(c>0)
{
cout<<"s is greater than s1";
}
if(c<0)
{
cout<<"s1 is greater than s";
}
if(c==0)
 cout<<"strings are equal";
}

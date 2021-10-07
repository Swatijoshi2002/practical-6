#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,s1;
   getline(cin,s);
s1=s;
reverse(s.begin(),s.end());
int c=0;
for(int i=0,j=s1.length()-1;i<s.length();i++,j--)
{
 if(s[i]-'0'==s1[i]-'0')
{
   continue;
}
else c=1;
}
cout<<s<<" "<<s1<<endl;
if(c==0)
{
cout<<"string is palindrome";
}
else 
{
cout<<"string is not palindrome";
}
}

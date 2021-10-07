#include<bits/stdc++.h>
using namespace std;

void func1()
{
  int a,b;
cin>>a>>b;
cout<<"sum of ints=>"<<a+b<<endl;
}
void func2()
{
  float a,b;
cin>>a>>b;
cout<<"sum of floats=>"<<a+b<<endl;
}
void func3()
{
  int a;
float b;
cin>>a>>b;
cout<<"sum of float and int =>"<<a+b<<endl;
}
void func4()
{
  string a,b;
cin>>a;
cin>>b;
a+=b;
cout<<"sum of strings=>"<<a<<endl;
}
/*void func5()
{
  int  a;
string b;
cin>>a;
getline(cin,b);
cout<<"sum of strings=>"<<a+b<<endl;
}*/
int main()
{
cout<<"add of int var"<<endl;
func1();
cout<<"add of float var"<<endl;
func2();
cout<<"add of float and int var"<<endl;
func3();
cout<<"add of string and string"<<endl;
func4();
/*cout<<"add of int and string"<<endl;  //error: mismatched types 
func5();*/
}

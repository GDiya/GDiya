#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter 3 nos: ";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	{
		cout<<a<<" is the biggest no.";
	}
	else if(b>a&&b>c)
	{
		cout<<b<< "is the biggest no.";
	
	}
	else if(c>a&&c>b)
	{
		cout<<c<<" is the biggest no.";
	}
	else if(a==b&&a==c)
	{
		cout<<"all numbers are same";
	}
	else 
	cout<<"undefinable...";
	return 0;
}


#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r,m1,m2,m3,t,a;
	cout<<"enter your roll no.: ";
	cin>>r;
	cout<<"enter marks of any 3 subjects: ";
	cin>>m1>>m2>>m3;
	t=m1+m2+m3;
	a=t/3;
	cout<<"roll no.: "<<r<<endl<<"total= "<<t<<endl<<"average= "<<a;
	return 0;
}

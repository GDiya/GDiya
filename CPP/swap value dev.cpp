#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char x[10],y[10],z[10];
	cout<<"enter value of x and y: "<<endl;
	cin>>x>>y;
	cout<<"before swapping..."<<endl;
	cout<<x<<" is x"<<endl<<y<<" is y"<<endl;
	cout<<"therfore...."<<endl;
	cout<<x<<y<<endl;
	cout<<"after swapping..."<<endl;
	strcpy(z,x);
	strcpy(x,y);
	strcpy(y,z);
	cout<<x<<" is x"<<endl<<y<<" is y"<<endl;
	cout<<"therefore...."<<endl;
	cout<<x<<y;
	return 0;
	
}

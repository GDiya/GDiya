#include<iostream>
#include<conio.h>
using namespace std;
#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}
int main()
{
	int x,y;
	cout<<"enter any integer values for x and y: "<<endl;
	cin>>x>>y;
	cout<<"before swapping..."<<endl<<"x is "<<x<<" and y is "<<y<<endl;
	SWAP(x,y);
	cout<<"after swapping..."<<endl<<"x is "<<x<<" and y is "<<y<<endl;

	return 0;
}


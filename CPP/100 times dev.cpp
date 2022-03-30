#include<iostream>
using namespace std;
int main()
{
	char n[50];
	cout<<"enter your name: "<<endl;
	cin.get(n,50);   
	for(int i=1;i<=500;i++)
	{
		cout<<n<<"\n";
	}
	return 0;
}

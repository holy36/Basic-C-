#include<iostream>
#include<conio.h>
int i,j;
using namespace std;

int fi(int n);
int main()
{
	cout<<"Nhap vi tri can in : ";
	cin>>j;
	for(i=1;i<=j;i++)
	{
		cout<<fi(i)<<" ";
	}

	getch();
	return 0;
}

int fi(int n)
{
	if((n==1)||(n==2))
	{
		return 1;
	}
	else 
	{
		return(fi(n-1)+fi(n-2));
	}
}

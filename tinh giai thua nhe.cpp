#include<iostream>
int n;
using namespace std;
int gt(int n);
int main()
{
	cout<<"Nhap so n can tinh giai thua di  : ";
	cin>>n;
	cout<<" Gia tri khi tinh n!= "<<gt(n);
	
	
}
int gt(int n)
{
	if(n!=1)
	{
		return ( n*gt(n-1));
	}
	else
	{
		return 1;
	}
}

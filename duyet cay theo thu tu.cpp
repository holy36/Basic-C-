#include<iostream>
#include<math.h>
using namespace std;

void Dt(int a[],int n,int i)
{
	if(i<n) 
{

	cout<<a[i]<<" ";
	Dt(a,n,2*i+1);
	Dt(a,n,2*i+2);

}
	return;
}
void Ds(int a[],int n,int i)
{
	if(i<n) 
{


	Ds(a,n,2*i+1);
	Ds(a,n,2*i+2);
	cout<<a[i]<<" ";

}
	return;
}
void Dg(int a[],int n,int i)
{
	if(i<n) 
{


	Dg(a,n,2*i+1);
	cout<<a[i]<<" ";
	Dg(a,n,2*i+2);

}
	return;
}
int main()
{
	int a[99],n;
	cout<<"Nhap kich co cay : ";	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i+1<<"]=";  	cin>>a[i];
	}
	Dt(a,n,0);
	cout<<endl;
	Ds(a,n,0);
	cout<<endl;
	Dg(a,n,0);
	return 0;
	
	
	
}

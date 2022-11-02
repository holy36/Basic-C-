#include<iostream>
#include<math.h>
using namespace std;

void swap(int a,int b)
{
	int k=a;
	b=a;
	a=k;
	return;
}
void vundong(int a[],int n,int i)
{
	int max=i;
	if(a[2*i+1]>a[i] && 2*i+1<n)
	{
		swap(a[i],a[2*i+1]);
		max=2*i+1;
	}
	if(a[2*i+2]>a[i] && 2*i+2<n)
	{
		swap(a[i],a[2*i+2]);
		max=2*i+2;
	}
	if(max!=i)
	{
		vundong(a,n,max);
	}
}
void incay(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
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
	for(int i=(n+1)/2-1;i>=0;i--)
	{
		vundong(a,n,i);
	}
	incay(a,n);
	return 0;
	
}

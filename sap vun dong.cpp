#include<iostream>
#include<math.h>
using namespace std;

void swap(int &a,int &b)
{
	int k=a;
	a=b;
	b=k;
	return;
}
void vundong(int a[],int n,int i)
{
	int max=i;
	if((a[2*i+1]>a[max]) && (2*i+1<n))
		max=2*i+1;
	if((a[2*i+2]>a[max]) && (2*i+2<n))
		max=2*i+2;
	if(max!=i)
	{	swap(a[i],a[max]);
		vundong(a,n,max);
	}
	return;
}
void incay(int a[],int n)
{
	int k=1;
	for(int i=0;i<n;i++)
	{
		if(i+1>=k){
			cout<<endl;
			k=k*2;
		}
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
	for(int i=n/2-1;i>=0;i--)
	{
		vundong(a,n,i);
	}
	incay(a,n);
	for(int i=n-1;i>=0;i--)
	{
		swap(a[0],a[i]);
		vundong(a,i,0);
	}
	cout<<endl<<"Day sau khi sap xep la : ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}

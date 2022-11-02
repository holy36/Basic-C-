#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a[99];
	float s;
	int n,j; j=0;
	cout<<"Nhap so phan tu : ";  cin>>n; 
	for(int i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"] = ";   cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0)
		{
			j++;
			s=s+a[i];
			cout<<a[i]<<"  ";
		}
	}
	cout<<"Tong cac so duong trong day la : "<<s;
	return 0;
}

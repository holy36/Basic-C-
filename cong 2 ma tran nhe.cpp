#include <iostream>
int m,n,i,j;
using namespace std;

int main()
{ 
	int a[99][99];
	int b[99][99];
	int c[99][99];
	cout<<"Nhap so hang , so cot cua 2 ma tran  : ";
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)	
			{
				cout<<"nhap a["<<i<<','<<j<<"] = ";
				cin>>a[i][j];
			}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)	
			{
				cout<<"nhap b["<<i<<','<<j<<"] = ";
				cin>>b[i][j];
			}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		    cout<<"  c["<<i<<','<<j<<"] = "<<c[i][j];
		}
	}
	return 0;

 } 

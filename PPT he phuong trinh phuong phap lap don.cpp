#include<iostream> 

using namespace std;
int main()
{
	float a[99][99];	float x[99];   float g[99];	int n;
	cout<<"Nhap so an cua he phuong trinh : ";    	cin>>n;
	cout<<"Nhap x0="; cin>>x[1]>>x[2]>>x[3]>>x[4];
	cout<<"Nhap he phuong trinh ve trai : "<<endl;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];  
			}
  	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			{
				cout<<a[i][j]<<" x"<<j<<"   ";
				if(j==n)
				{
					cout<<endl;
				}
			}
	cout<<"Nhap ve phai : ";     cin>>g[1]>>[2]>>g[3]>>g[4];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			{
				cin>>a[i][j];  
			}
	
	return 0;
}

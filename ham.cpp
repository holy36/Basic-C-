#include<iostream>
#include<math.h>
int i,j,h,m,n,u,v,s;
using namespace std;

int main()
{
	int a[99][99]; //Khai bao ma tran A
	int *k;
	k=a[0];
	int b[99][99]; //Khai bao ma tran B
	int c[99][99]; //Khai bao ma tran C
	cout<<"Nhap ma tran A :";
	kb(k);
	return 0;
	 
}
	
int kb(int &a)
{   
	cout<<"Nhap so hang , so cot cua ma tran : ";
    cin>>m; cin>>n;
	for(int q=1;q<=m;q++)
    {
    	for(int b=1;b<=n;b++)
    	{
    		cin>>a[q][b];
		}
	}
	return a;
}


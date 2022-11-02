#include<stdio.h>
#include<math.h>
using namespace std;

void Tron(int a[],int m,int n,int p)
{
	int i=m, j=n+1;
	while(i<j && j<=p)	
		if(a[i]<=a[j])  i++;
		else
		{
			int x=a[j];
			for(int k=j-1;k>=i;k--)
			{
				a[k+1]=a[k];
			}
			a[i]=x;
		}	
	i++; j++;

}

void Tach(int a[],int first,int last)
{
	if(first>=last) return;
	int m=(first+last)/2;
	if(first<=m) Tach(a,first,m);
	if(last>=m)  Tach(a,m+1,last);
	Tron(a,first,m,last);
}

void Sapxep(int a[],int n)
{
	if(n<2) return ;
	Tach(a,0,n-1);
}

int main()
{
	int a[99];
	int n;
	printf("So phan tu cua day : "); scanf("%d",&n);
	printf("Nhap day : \n");
	for(int i=0;i<n;i++)
	{
		printf("Nhap a[%d]=",i); scanf("%d",&a[i]); 
	}
	Sapxep(a,n);
	printf("Day sau khi duoc sap xep la : \n");
	for(int i=0;i<n;i++)
	{
		printf("%d, ",a[i]); 
	}
	
}

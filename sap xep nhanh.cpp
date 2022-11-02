#include<stdio.h>
#include<math.h>
using namespace std;

void Sapxepmang(int a[],int first, int last)
{
	if(first>=last) return;
	int i=first+1;  int k; int j=last;
	while(i<=j)
	{
		while(a[i]<=a[first]&& i<=j)  	i++;
		while(a[j]>a[first]&& i<=j)	j--;
		if(i<j)
		{	
			k=a[j];
			a[j]=a[i];
			a[i]=k;
			i++; j--;
		}
	
	}
  		k=a[j];
		a[j]=a[first];
		a[first]=k;
		//printf("%d ",a[i]); 
		Sapxepmang(a,first,j-1);
		Sapxepmang(a,j+1,last);

	return;
}

int main()
{
	int a[99];   int n;
	printf("Nhap so phan tu cua mang ");   scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);  scanf("%d",&a[i]);
	}
	Sapxepmang(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);  
	}
	return 0;
}

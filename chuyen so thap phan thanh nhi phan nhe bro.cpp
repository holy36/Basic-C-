#include<iostream>  
int n,j,i;
#include<math.h>
using namespace std;

int main()
{
	i=0;
	int a[99];
	cout<<"Nhap so thap phan : ";
	cin>>n;
	while(n>0)
	{
	
		a[i]=n%2;
		n=(n-a[i])/2;
		i++;
	}
	cout<<"so sau khi chuyen thanh nhi phan la : "<<endl;
	
	for(j=(i-1);j>=0;j--)
	{
		cout<<a[j]<<"  ";
	}
	return 0;
}

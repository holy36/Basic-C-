#include<iostream>
 #include <math.h>
int a,s,i,j;
using namespace std;
 
int main()
{
	int h[99];
	cout<<"nhap gia tri so can dao nguoc : ";
	cin>>a;  j=0;
    while(a>0)
    {   
	 	j++;
    	h[j]=a%10;
    	a=(a-h[j])/10;
	}
	a=0;
	for(i=1;i<=j;i++)
	{
		a=a*10+h[i];
	}
cout<<"so da dao nguoc la :"<<a;
return 0;
}

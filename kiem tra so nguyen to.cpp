#include <iostream>
int i,a,s; 
using namespace std;

int main()
{
	cout<<"nhap so can xac dinh : a = ";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{s++; 
		} 
	 } 
	 if(s==2)
	 { 
		cout<<"so a la so nguyen to";
	  } 
	  else
	  {cout<<"so a khong phai so nguyen to nhe";
	   } 
	return 0; 
}

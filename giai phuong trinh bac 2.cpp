#include<iostream>
#include <math.h>
using namespace std;
float a,b,c,d,x1,x2;
int main()
{ 
	cout<<"he so cua x^2 , x va he so tu do lan luot la : ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>=0)
	{ if(d==0)
		{x1=-b/(2*a);
		cout<<"phuong trinh co nghiem duy nhat x = "<<x1;
		}
		else
			{
		x1=(-b-sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout<< "phuong trinh co 2 nghiem phan biet x1 = " <<x1<<" , x2 = "<<x2;
		}
	}
	else
	{  cout<<"phuong trinh vo nghiem nhe ! ";
	}
 
 return 0;
 
}

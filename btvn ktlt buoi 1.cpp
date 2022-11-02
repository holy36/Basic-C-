#include<iostream>
#include<math.h>
using namespace std;

int main()
{	float a,b,r,h;
	//Tinh dien tich , chu vi hinh chu nhat, tinh dien tich be mat , the tich hinh tru
	cout<<"Nhap chieu dai va chieu rong hinh chu nhat can tinh : ";
	cin>>a>>b;
	cout<<"Dien tich va chu vi hinh chu nhat can tinh la : "<<a*b<<"  , "<<2*a*b<<endl;
	cout<<"Nhap ban kinh day va chieu cao hinh tru ";
	cin>>r>>h;
	cout<<"Dien tich be mat va the tich hinh tru can tinh la "<<2*3.14*r*(r+h)<<" , "<<3.14*r*r*h;
	return 0;
 } 

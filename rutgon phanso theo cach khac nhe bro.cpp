#include<iostream>
#include<math.h>

using namespace std;

class phanso
{
	private:
		float tu,mau;
	public:
		void nhap();
		void rutgon();
};
void phanso::nhap()
{
	cout<<"Nhap phan so di bro : "<<endl<<" Nhap tu truoc da nhe : ";
	cin>>tu; cout<<" Tiep theo la nhap mau ne :  "; cin>>mau;
}
void phanso::rutgon()
{
	float a,b; a=tu; b=mau;
	if(tu==mau)
	{
		tu=1; mau=1;
		cout<<" Phan so sau khi rut gon la : 1/1 ";
	}
	else
	{
		while(a!=b)
		{
				if(a>b)
			{
				a=a-b;
			}
			else 
			{
				b=b-a;
			}
		}
		if(a==1)
		{
			cout<<"Phan so sau khi rut gon la : "<<(tu/a);
		}
		else
		{
			cout<<" Phan so sau khi rut gon la : "<<(tu/a)<<"/"<<(mau/a);
		}
	}
}
int main()
{
	phanso x;
	x.nhap();
	x.rutgon();
	return 0;
}

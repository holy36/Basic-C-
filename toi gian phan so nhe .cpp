#include<iostream>
#include<math.h>
using namespace std;
struct phansoay
{
	int tu;
	int mau;
};
typedef struct phansoay phanso;
void nhap(phanso &x);
phanso congtru(phanso x, phanso y);
void toigian(phanso &z);
int main()
{
	phanso m,n,z;
	cout<<"Nhap phan so thu 1 : "<<endl;
	nhap(m);
	cout<<"Nhap phan so thu 2 : "<<endl;
	nhap(n);
	z=congtru(m,n);
	toigian(z);
	cout<<"phan so sau khi cong va toi gian luon la : "<<z.tu<<"/"<<z.mau;
	return 0;
}
void nhap(phanso& x)
{
	cout<<"Nhap tu : ";
	cin>>x.tu;
	cout<<"Nhap mau : ";
	cin>>x.mau;
}
phanso congtru(phanso x, phanso y)
{
	phanso z;
	z.tu=((x.tu*y.mau)+(x.mau*y.tu));
	z.mau=(x.mau*y.mau);
	return z;
}
void toigian(phanso &z)
{
	int m,n;
	m=z.tu; n=z.mau;
	if(z.tu==z.mau)
	{
	z.tu=1; 
	z.mau=1;
	}
	else
	{
		while(m!=n)
		{
			if(m>n)
			{
			m=m-n;
			}
			else
			{
			n=n-m;	
			}
			
		}
	z.tu=(z.tu)/m;
	z.mau=(z.mau)/m;
	}
}

#include<iostream>
#include<math.h>
using namespace std;

struct cailonditmemay 
{
	int a[3];
};
typedef struct cailonditmemay vecto;
void nhap(vecto &);
vecto tichcohuong(vecto x, vecto y);
int tichvohuong(vecto t, vecto z);
void xuat(vecto x, vecto y, vecto z);
int main()
{
	vecto x,y,z;
	cout<<"nhap vecto x di bro : ";
	nhap(x);
	cout<<"Nhap vecto y di bro : ";
	nhap(y);
	cout<<"Nhap vecto z di bro : ";
	nhap(z);
	xuat(x,y,z);
	return 0;

}
void nhap(vecto& x)
{
	for(int i=1;i<=3;i++)
	{
		cin>>x.a[i];
	}
}
vecto tichcohuong(vecto x, vecto y)
{
	vecto t;
	t.a[1]=(x.a[2]*y.a[3])-(x.a[3]*y.a[2]);
	t.a[2]=(y.a[1]*x.a[3])-(x.a[1]*y.a[3]);
	t.a[3]=(x.a[1]*y.a[2])-(x.a[2]*y.a[1]);
	return t;
}
int tichvohuong(vecto t, vecto z)
{
	int s;
	s=t.a[1]*z.a[1]+t.a[2]*z.a[2]+t.a[3]*z.a[3];
	return s;
}
void xuat(vecto x, vecto y, vecto z)
{
	int s;
	vecto t;
	t=tichcohuong(x,y);
	s=tichvohuong(z,t);
	if(s==0)
	{
		cout<<"3 vecto nay dong phang nhe ! ";
	}
	else
	{
		cout<<"3 vecto nay khong dong phang dau !!!";
	}
	
}

#include<iostream>
using namespace std;

class csophuc
{
	private:
		int thuc,ao;
	public:
		csophuc();
		csophuc(int ,int );
		csophuc(const csophuc &);
		void xuat();
};
csophuc::csophuc()
{
	thuc=1;
	ao=1;
}
csophuc::csophuc(int thucvl,int aovl)
{
	thuc=thucvl;
	ao=aovl;
}
csophuc::csophuc(const csophuc &x)
{
	thuc=x.thuc;
	ao=x.ao;
}
void csophuc::xuat()
{
	cout<<this->thuc<<"+"<<this->ao<<"i"<<endl;
}
int main()
{
	csophuc x;
	csophuc y(1,2);
	csophuc z(x);
	cout<<"So phuc x la : ";
	x.xuat();
	cout<<"So phuc y la : ";
	y.xuat();
	cout<<"So phuc z la : ";
	z.xuat();
	return 0;
}

#include<iostream>
#include<cstring>

using namespace std;
struct hocsinhcailon  // tao 1 bien dang struct
{
	int toan,van;
	float diemtb;
	string hoten;
};
typedef struct hocsinhcailon HOCSINH; // tao 1 kieu du lieu struct va dat ten cho no la HOCSINH
void Nhap(HOCSINH&);
void Xuli(HOCSINH&);
void Xuat(HOCSINH);
int main()
{
	HOCSINH a;
	Nhap(a);
	Xuli(a);
	Xuat(a);
	return 0;
	
}
void Nhap(HOCSINH& x )
{
	cout<<"Nhap ho ten hoc sinh :";
	getline(cin,x.hoten);
	cout<<"Nhap diem toan , van cua hoc sinh : ";
	cin>>x.toan>>x.van;
}
void Xuli(HOCSINH& x)
{
	x.diemtb=(x.toan+x.van)/2;
}
void Xuat(HOCSINH x)
{
	cout<<"Diem trung binh cua hoc sinh "<<x.hoten<<" la :"<<x.diemtb;
}

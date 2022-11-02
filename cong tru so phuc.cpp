#include<iostream>
using namespace std;

class sophuc
{
	private:
		int thuc,ao;
	public:
		friend istream & operator>>(istream &is,sophuc &z);
		friend ostream & operator<<(ostream &os,sophuc z);
		friend sophuc operator-(sophuc sp1,sophuc sp2);
		sophuc cong(sophuc k);
		
};
istream & operator>>(istream &is,sophuc &z)
{
	cout<<"Nhap phan thuc va phan ao cua so phuc : ";
	is>>z.thuc;
	is>>z.ao;
	return is;
}
ostream & operator<<(ostream &os,sophuc z)
{
	cout<<z.thuc<<"+"<<z.ao<<"i"<<endl;
	return os;
}
sophuc operator-(sophuc sp1,sophuc sp2){
	sophuc kq;
	kq.thuc=sp1.thuc-sp2.thuc;
	kq.ao=sp1.ao-sp2.ao;
	return kq;
}
sophuc sophuc::cong(sophuc k)
{
	sophuc u;
	u.thuc=this->thuc+k.thuc;
	u.ao=this->ao+k.ao;
	return u;
}
int main()
{
	sophuc u,z,k;
	cin>>z>>k>>u;
	cout<<z<<k;
	cout<<"Tong 2 so phuc vua nhap la : "<<z.cong(k);
	cout<<"hieu 2 so phuc vua nhap la : "<<z-k-k;
	return 0;
}

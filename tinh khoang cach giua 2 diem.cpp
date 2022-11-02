#include<iostream>
#include<math.h>

using namespace std;

class khonggian
{
	private:
		float a[3];
		float b[3];
		float s;
	
	public:
		void nhap();
		void khoangcach();
};
void khonggian::nhap()
{
	cout<<"Nhap toa do diem A truoc de bro : ";
	for(int i=1;i<=3;i++)
	{
		cin>>a[i];
	}
	cout<<"      Nhap toa do diem B de bro : ";
	for(int i=1;i<=3;i++)
	{
		cin>>b[i];
	}
	
}
void khonggian::khoangcach()
{
	s=sqrt(pow((a[1]-b[1]),2)+pow((a[2]-b[2]),2)+pow((a[3]-b[3]),2));
	cout<<"Khoang cach giua 2 diem A,B la : AB = "<<s;
} 

int main()
{
	khonggian x;
	x.nhap();
	x.khoangcach();
	return 0;
}

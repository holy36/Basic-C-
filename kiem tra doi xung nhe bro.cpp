#include<iostream>
#include<math.h>

using namespace std;
struct may 
{
	int a[99][99];	
	int m,n;
};
typedef struct may matran;
void ktdoixung(matran x);
void nhap(matran &x);

int main()
{
	matran x;
	nhap(x);
	ktdoixung(x);
	return 0;
}
void nhap(matran &x)
{
	cout<<"Nhap so hang, so cot cua ma tran ik bro : ";
	cin>>x.m>>x.n;
	cout<<" Nhap ma tran de : "<<endl;
	for(int i=0;i<x.m;i++)
	{
		for(int j=0;j<x.n;j++)
		{
			cin>>x.a[i][j];
		}
	}
}
void ktdoixung(matran x)
{
	if(x.m!=x.n)
	{
		cout<<"Ma tran nay co doi xung dau !!!";
		exit(0);
	}
	for(int i=0;i<x.m;i++)
	{
		for(int j=0;j<x.n;j++)
		{
			if(i!=j)
			{
				if(x.a[i][j]!=x.a[j][i])
				{
					cout<<"Ma tran nay co doi xung dau!!!";
					exit(0);
				}
				
			}
		}
	}
	cout<<"Ma tran nay doi xung nhe bro ! ";
	
}

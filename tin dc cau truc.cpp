#include<stdio.h>
#include<math.h>

typedef struct
{
	char hoten[99];
	unsigned long int sobaodanh,diemthi;
	
}hocsinh;
hocsinh nhap(hocsinh x);
hocsinh nhap(hocsinh x)
{
	printf("\nNhap ten hoc sinh : ");
	fflush(stdin);
	gets(x.hoten);
	printf("Nhap so bao danh cua hoc sinh %s : ",x.hoten);
	scanf("%lu",&x.sobaodanh);
	printf("Nhap diem thi cua hoc sinh %s : ",x.hoten);
	scanf("%lu",&x.diemthi);

	return x;
}
int main()
{	
	hocsinh a[99];
	int n; 
	printf("Nhap so hoc sinh : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		nhap(a[i]);
	}
	printf("Cac hoc sinh co diem thi tu 22.5 tro len la : ");
	for(int i=0;i<n;i++)
	{
		if(a[i].diemthi>=22,5)
		{
			printf("\n%s , so bao danh : %lu",a[i].hoten,a[i].sobaodanh);
		}
	}
	return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
	FILE *f=fopen("Soduong.Dat","wb");
	int i,n,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			fwrite(&a[i],sizeof(int),1,f);
		}
	}
	
	fclose(f);
	return 0;
}

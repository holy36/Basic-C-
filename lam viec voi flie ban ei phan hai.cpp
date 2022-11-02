#include<stdio.h>
#include<math.h>

int main()
{
	FILE *f=fopen("Soduong.Dat","rb");
	int n,s;
	if(!f)
	{
		printf("Xay ra loi ban ei ");
		return 0; 
	} 
	while(!feof(f))
	{
		fread(&n,sizeof(int),1,f);
		if(s<n)
		{
			s=n;
		}
	}
	printf("%d",s);
	fclose(f);
}

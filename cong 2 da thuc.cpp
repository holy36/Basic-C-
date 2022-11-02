#include<stdio.h>
#include<math.h>
using namespace std;

struct Node
{
	float hs;
	int sm;
	Node *next;
};

struct DT
{
	Node *l,*f;	
};

void DTimit(DT *&list)
{
	list->f=list->l=0;
}
DT* add(DT *c,Node *x)
{
	if(c->f==0)
	{
		c->f=x;  
		c->f->hs=x->hs;
		c->f->sm=x->sm;
	}
	else
	{
		x->next=c->f;
		c->f=x;
	}
	return c;
}
void nhapdathuc(DT *a, int n)
{	float k;
	for(int i=0;i<n;i++)
	{
		printf("Nhap he so cua x^%d = ",i);  scanf("%f",&k);
		if(k!=0)	
		{	
			Node *x;
			x->hs=k;	x->sm=i; 	
			add(a,x);
		}	
	}
}
int main()
{	
	DT *a,*b; int m,n;  DTimit(a);  DTimit(b);
	printf("Nhap so phan tu cua da thuc A(x) : ");	 scanf("%d",&n);
	nhapdathuc(a,n);
	printf("Nhap so phan tu cua da thuc B(x) : ");	 scanf("%d",&m);
	nhapdathuc(b,m);
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;

struct NODE
{
	int data;
	struct NODE *left, *right;
};
typedef struct NODE node;
typedef struct NODE * tree;

void khoitao(tree &t)
{
	t=NULL;
}

void them(tree &t, int x)
{

	if(t==NULL)		
	{	node *k=new node;
		k->data=x;
		k->left=NULL;
		k->right=NULL;
		t=k;
	}
	else
	{
		if(t->data==x)	return;
		if(t->data>x)	them(t->left,x);
		if(t->data<x)	them(t->right,x);
	}
}

void Dg(tree t)
{
	if(t!=NULL)
	{
	Dg(t->left);
	cout<<" "<<t->data;
	Dg(t->right);
	}
}
void nhap(tree t,int n)
{
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<"Nhap so can them : ";	cin>>x;
		them(t,x);
	}
	return; 
}
void kiemtra(tree t, tree u)
{
	if((t==NULL && u!=NULL)||(t!=NULL && u==NULL))
	{
		cout<<"Hai cay khong bang nhau"; return;
	}
	if(t!=NULL && u!=NULL)
	{
		cout<<"kha ";
	if(t->data!=u->data)	
	{
		cout<<"Hai cay khong bang nhau"; return;
	}
	else
	{
		cout<<"banh ";
		kiemtra(t->left,u->left);
		kiemtra(t->right,u->right);
	}
	}
	cout<<"Hai cay bang nhau ";
	return;  
}
void makeEmpty(tree &t)
{
if (t == NULL) 		return;
makeEmpty(t->left); 
makeEmpty(t->right); 
delete t; 
t = NULL;
}
int main()
{
	tree t,u; khoitao(t); khoitao(u); int n,m;	
	cout<<"Nhap cay A : "<<endl<<"Nhap so phan tu cua cay : "; cin>>n; 
	nhap(t,n);
	Dg(t);
	cout<<"Nhap cay B : "<<endl<<"Nhap so phan tu cua cay : "; cin>>m; 
	nhap(u,m);
	Dg(u);
	kiemtra(t,u);
	return 0;
}

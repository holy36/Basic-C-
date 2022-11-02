#include <iostream>
#include<math.h>
#define V 9
using namespace std;

void taomt(int arr[][V]) {
  for (int i = 1; i <= V; i++)
    for (int j = 1; j <= V; j++)
      arr[i][j] = 0;
}

void add(int arr[][V], int i, int j) {
  arr[i][j] = 1;
  arr[j][i] = 1;
}

void inmt(int arr[][V]) {
  for (int i = 1; i <= V; i++) 
  {
  	if(i==1)
  	{
  		cout<<"	1	2	3	4	5	6	7	8	9"<<endl<<endl;;
	}
    cout<<i<<"	";
    for (int j = 1; j <= V; j++) 
	{
    cout<<arr[i][j]<<"	";
    }
    cout<<endl;
  }
}

struct Node
{
	int data;
	Node* next;
};
struct List
{
	Node* head;
	Node* tail;
};
void Listimit(List& l)
{
	l.head = NULL;
	l.tail = NULL;
}
void add(List& l,int x)
{
	Node* node = new Node;
	node->data = x;
	node->next = NULL; 
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		node->next = l.head;
		l.head = node;
	}
}
void inList(List l)
{
	if (l.head != NULL)
	{
		Node* node = l.head;
		while (node != NULL)
		{
			cout << node->data << ' ';
			node = node->next;
		}
	}
}
int main() {
	// O day chon Denebola la 1 , Zosma la 2 , Chertan la 3 , Regulus la 4 , Algieba la 5 , Adhafera la 6 , Rasalas la 7 
	// cai chom sao khong co ten ky hieu chu n kia la 8 , ky hieu chu E la 9 
  int m[V][V];
  taomt(m);
  add(m,1,2); add(m,1,3); add(m,2,3); add(m,2,5); add(m,4,3); 
  add(m,8,4); add(m,8,5); add(m,6,5); add(m,6,7); add(m,7,9); 
  inmt(m);
  for(int i=1;i<=V;i++)
  {
  	List c; Listimit(c);
  	for(int j=V;j>=1;j--)
  	{
  		if(m[i][j]==1)	add(c,j);
	}
	cout<<"Danh sach ke cua "<<i<<" la : "; inList(c); cout<<endl;
  }

  return 0;
}

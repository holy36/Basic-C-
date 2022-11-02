#include<iostream>
int i,j;
#include<cstring>
using namespace std;
string a,b,c;


int main()
{   cout<<"nhap chuoi di nhe : ";
    getline(cin,a); b="";
	i=a.length();
    for(j=i;j>=0;j--)
    {   c=a[j];
    	b.append(c);
	}
	cout<<b;
	return 0;
 } 

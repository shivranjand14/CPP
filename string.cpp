#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10],b[10],c[10];
	
	gets (a);
    gets (b);	
	
	strlen(a);
	strlen(b);
	
	int x=strlen(a);
	for(int i=0;i<x;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		a[i]='%';
		cout<<a[i];
		break;
		
	}
	
	return 0;
}

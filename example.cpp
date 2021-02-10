#include<iostream>
using namespace std;
int main()
{
	int n;
	int b[5],c[5],a[5],i,j;
	cout<<"enter size";
	cin>>n;
	cout<<"enter element of 1st array";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter element of 2nd array";
	for(int j=0;j<n;j++)
	
		cin>>b[j];
	cout<<"Addition is";
	for(int j=0;j<n;j++)
       c[j]=a[i]+b[j];
		cout<<c[j];
	return 0;
}


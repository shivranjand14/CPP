#include<iostream>
using namespace std;

int main()
{
	int a[10],size,max=0,zero=0;
	cout<<"enter the size";
	cin>>size;
	cout<<"enter the elements";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"array is";
	for(int j=0;j<size;j++)
	{
		if(zero==a[j])
		{
		cout<<"0";
		break;	
		}
		/*else if(max<a[j])
	{
	max=a[j];	
	}*/
	
	}

cout<<max;
	return 0;
}

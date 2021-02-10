#include<iostream>
using namespace std;
int pow(int n,int p)
{
	int ans=1;
	for(int i=0;i<p;i++)
	{
		ans=ans*n;
		
	}
	return ans;
}
int main()
{
	int n,p,ans;
	cout<<"enter no";
	cin>>n;
	cout<<"enter power";
	cin>>p;
	cout<<"ans is:"<<pow(n,p);
}


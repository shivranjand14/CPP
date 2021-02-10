#include<iostream>
using namespace std;
int main()
{
	
	int n,count;
	cin>>n;
	int coin[n-1];
	for(int i=0;i<n-1;i++)
	{
		cin>>coin[n-1];
	}
	for(int i=0;i<n-1;i++)
	{
		count=0;
		for(int j=0;j<n-1;j++)
		{
			if(coin[j]==coin[i])
			count++;
		}
		if(count%2==1)
		cout<<count;
		return 0;
		
	}
	
	
	return 0;
}

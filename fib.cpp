#include<iostream>
using namespace std;
int main()
{
	int n,t1=0,t2=1,fib;
	cin>>n;
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	{
		for(int i=0;i<n;i++)
		{
		fib=t1+t2;
		t1=t2;
		fib=t1;
	}
	}
	cout<<fib;
}

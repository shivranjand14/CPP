#include<iostream>
using namespace std;
int main()
{
	int fact=1,n;
	cin>>n; //5
	for(int i=n;i>0;i--) //i==5 , 5>0 ,5--==4 
	{
		fact=fact*i;
		
	}
	cout<<fact;
	return 0;
}

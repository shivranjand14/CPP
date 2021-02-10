#include<iostream>
using namespace std;
int main()
{
	int a[10],n;
	cout<<"Enter Numbers"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
    }
    cout<<"array is :";
	for(int i=0;i<n;i++)
	{
	cout<<a[i];
    }
    return 0;
		
}

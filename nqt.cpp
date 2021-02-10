#include<iostream>
using namespace std;
void num(int n)
{
	

	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		cout<<i<<'\t';
	}
	
}
int main()
{
	int n;
	cout<<"Enter No :=";
	cin>>n;
	if(n<0)
	{
			cout<<"wrong input"<<endl;
			cout<<"Enter positive number := "<<endl;
			cin>>n;
			
			num(n);
	}


}

#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d;
	cout<<"Enter 1st no :"<<endl;cin>>a;
	cout<<"Enter 2nd no :"<<endl;cin>>b;
	cout<<"Enter 3rd no :"<<endl;cin>>c;
	//cout<<"Greter no is :"<<d;
	/*if(a>b)
	{
	cout<<a;
    }
	else if(a>c)
	{
	cout<<a;
	}
	else if(b>c)
	{
	cout<<b;
	}
	else
	{
	cout<<c;
	}*/
	
	//ternary operator code is here
	d=(a>b)?(a>c?a:c):(b>c?b:c);
	cout<<"Greter no is :"<<d;
	return 0;
	
}

//convert binary to decimal 

#include<iostream>
using namespace std;
int main()
{
	int num,rem,dec=0,base=1,bin;
	cin>>num;
	bin=num;
	while(num>0)
	{
		rem=num%10;
		dec=dec+rem*base;
		num=num/10;
		base=base*2;
		
		
	}
	cout<<dec;
	return 0;
}

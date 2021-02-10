#include<iostream>
using namespace std;
int main()
{
	int key;
	char ch,en;
	cin>>ch>>key;
	
	if(islower(ch))
	{
		en=((ch-97)+key)%26;
		cout<<(char)(en+97);
	}
	else
	{
		en=((ch-65)+key)%26;
		cout<<(char)(en+65);
	}
	return 0;
}

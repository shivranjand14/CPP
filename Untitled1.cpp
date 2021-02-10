#include<iostream>
using namespace std;

int pro(int A[],int L,int N)
{
	int count=0;
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			int prod=A[i]*A[j];
			if(N==prod)
			{
				cout<<A[i]<<A[j];
				count++;
			}
		}
	}
	return count;
}



int main()
{
   int a[]={1,2,3,4,5};
   int l=5;
   int n;
   cin>>n;
   pro(a,l,n);	
}

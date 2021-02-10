#include<iostream>
using namespace std;
class prime
{
	public : int n;
 
    void check()
    {
    	cout<<"enter no";
          cin>>n;
        if(n<0)
        {
        cout<<"Enter valid no"<<endl;
		}
    else
    {
        prime(n);
    }
}
    
     void prime(int n)
    {
        int i,div=0;
        for(int i=1;i<n;i++)
        {

         if(n%i==0) 
         {
          div++;
         }
         if(div==2)
         {
             cout<<"no is prime";
         }
     else
     {
         cout<<"no is not prime";
     }
        } 
	
    
};
int main()
{
	prime p;
	p.check();
	return 0;
}

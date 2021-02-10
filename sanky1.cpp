#include <iostream>
using namespace std;
int productisM(int arr[], int n, int m)
{
   int count = 0;
   for (int i = 0; i < n; i++)
   {
      for (int j = i+1; j < n; j++)
	  {
    
            int prod=arr[i]*arr[j];
            //cout<<prod;
            if(prod==m)
               {
               	cout<<arr[i]<<"*"<<arr[j]<<endl;
			    count++;
			   }
         }
      }
   
   return count;
}
int main()
{
   int Arr[]={ 1,2,3,0,19,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
   int length=20; //length of array
   int M;
   cout<<"Enter value of the number ";
   cin>>M;
   cout << "Number of duplets are : "<<productisM(Arr,length,M);
   return 0;
}

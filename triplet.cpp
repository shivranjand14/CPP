#include <bits/stdc++.h>
using namespace std;
int productisM(int arr[], int n, int m){
   int count = 0;
   for (int i = 0; i < n-2; i++){
      for (int j = i+1; j < n-1; j++){
        // for (int k = j+1; k < n; k++){
            int prod=arr[i]*arr[j];
            if(prod==m)
               { count++; }
         }
      }
   
   return count;
}
int main(){
   int Arr[]={ 1,2,3,0,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
   int N=20; //length of array
   int M;
   cout<<"enter value of m ";
   cin>>M;
   cout <<endl<< "Number of duplets with product M : "<<productisM(Arr,N,M);
   return 0;
}

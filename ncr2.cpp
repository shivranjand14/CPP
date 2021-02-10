#include <iostream>

using namespace std;

int countZeros(int[], int);


int main(void){
    int i,n; //simulate i=10
    cout<<"Please input number of elements: ";
    cin>>i; //i=10
    int arrayOfIntegers[i]; //arrayOfIntegers[10]
    cout<<"Please input "<<i<<" elements: ";
    cin>>arrayOfIntegers[i];

    cout << "The numbers of zeros in the array are: ";
    cout << countZeros(arrayOfIntegers, i);
    cout << endl;

}


int countZeros(int n[], int number)
{
    if (number > 1){
        if (n[number - 1] == 0){
            return 1 + countZeros(n, number - 1);
        }
        else{
            return 0 + countZeros(n, number - 1);
        }
    }
    else{
        return 0;
    }

}

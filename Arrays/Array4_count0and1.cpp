//Count 0's and 1's in array 
#include<iostream>
using namespace std;

int main(){

int arr[] = {0,1,0,1,0,1,0,1,1,1,0,0,0,1,1,1};
int size = 16;
int noOfZeros = 0;
int noOfOnes = 0;

for(int i=0; i<size; i++){
    if(arr[i] == 0){
      noOfZeros++;

    }
    if(arr[i] == 1){
        noOfOnes++;
        
    }
}

cout << "No of Zeros are " << noOfZeros << endl;
cout << "No of Ones are " << noOfOnes << endl;


return 0;
}


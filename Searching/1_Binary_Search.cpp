#include <iostream>
using namespace std;


int binarySearch(int arr[], int target, int size){
int start = 0;
int end = size - 1;
int mid = (start + end) / 2;
// int mid = start + (end - start)/ 2;

while(start <= end){
int element = arr[mid];

if(element == target){
    return mid;
}else if(target < element){
    end = mid - 1;

}else if(target > element){
    start = mid + 1;
}

mid  =(start + end) / 2;

}
 return - 1;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int target = 7; 
    int size = 7; 

   int indexOfTarget = binarySearch(arr, target , size);

   if(indexOfTarget == -1){
    cout << "target not found" << endl;
   }else {
    cout << "target found at " << indexOfTarget << endl;
   }
    return 0;
}
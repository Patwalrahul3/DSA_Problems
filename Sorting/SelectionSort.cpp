#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr {5,4,1,2,4,5,6,7};
  int size = 8;

  for(int i=0; i<size - 1; i++){
    int minIndex = i;
    for(int j= i + 1; j<size; j++){
      if(arr[j] < arr[minIndex]){
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
  

for(int i=0; i<arr.size(); i++){
 cout << "Sorted element is " << arr[i] << endl;
}
 
 

  return 0;
}
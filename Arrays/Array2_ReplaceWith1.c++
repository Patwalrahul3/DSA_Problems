// arr = {1,3,5,7,9}  replace all value with 1
#include <iostream>
using namespace std;

int main(){
int arr[]= {1,3,5,7,9};

for(int i=0;i<5; i++){
    arr[i]= 1;
}

for(int i=0; i<5; i++){
    cout << arr[i] << " ";
}

    return 0;
}

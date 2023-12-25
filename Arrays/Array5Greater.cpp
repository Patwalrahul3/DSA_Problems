// Greater element in an Array
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {30, 30, 20, 49, 90};
    int size = 5;
    int maxi = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout << "Greatest Element in an array is: " << maxi << endl;

    return 0;
}

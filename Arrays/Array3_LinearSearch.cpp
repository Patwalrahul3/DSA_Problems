// Linear Search

#include <iostream>
using namespace std;

bool linear(int arr[], int size, int key)
{
   // linear search logic
   for (int i = 0; i < size; i++)
   {
      if (arr[i] == key)
      {
         return true;
      }
   }
   return false;
}

int main()
{

   int arr[5] = {1, 3, 5, 6, 8};
   int size = 5;

   cout << "Enter element to found" << endl;
   int key;
   cin >> key;

   if (linear(arr, size, key))
   {
      cout << "Found" << endl;
   }
   else
   {
      cout << "Not Found" << endl;
   }
}

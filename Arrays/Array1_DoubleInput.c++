// Take 5 elements i/p in array & print their doubles
#include <iostream>
using namespace std;

int main()
{
  int arr[10];

  cout << "Enter input values in array" << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> arr[i];
  }

  // printing
  cout << "printing the values in array " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << 2 * arr[i] << " ";
  }

  return 0;
}
//  row wise sum

#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of row " << i << " = " << sum << endl;
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    printRowWiseSum(arr, rows, cols);
    return 0;
}
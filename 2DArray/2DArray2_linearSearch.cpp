// Linear Search
#include <iostream>
using namespace std;

bool linearSearch2D(int arr[][3], int row, int col, int key)
{
    // linear search logic
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int key = 90;
    int row = 3;
    int cols = 3;

    if (linearSearch2D(arr, row, cols, key))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 7, 9};
    int brr[] = {2, 4, 6, 8};

    int asize = 5;
    int bsize = 4;

    vector<int> ans;

    // push all element of vector A
    for (int i = 0; i < asize; i++)
    {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < bsize; i++)
    {
        ans.push_back(brr[i]);
    }

    // printing
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
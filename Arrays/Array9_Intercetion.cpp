#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    vector<int> brr{10, 20, 3, 4, 5, 60};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                // mark
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    // print
    for (auto val : ans)
    {
        cout << val << " ";
    }
}
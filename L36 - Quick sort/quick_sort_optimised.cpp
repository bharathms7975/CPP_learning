#include <iostream>
using namespace std;
#include <vector>

void quicksort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;
    int pivot = arr[r];

    int i = l, j = l;

    while (i < r)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }
    swap(arr[j], arr[r]);

    quicksort(arr, l, j - 1);
    quicksort(arr, j + 1, r);
}

int main()
{
    vector<int> arr = {6, 6, -6, -2, -4, -6, 2, -6};

    quicksort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // place pivot at right index
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i <= pivotIndex && j >= pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quicksort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // sort left part
    quicksort(arr, s, p - 1);
    // sort right part
    quicksort(arr, p + 1, e);
}

int main()
{
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6};
    int n = 8;
    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
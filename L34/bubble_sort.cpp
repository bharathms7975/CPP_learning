#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    return bubble_sort(arr, n - 1);
}

int main()
{
    int arr[6] = {2, 4, 6, 3, 6, 8};

    bubble_sort(arr, 6);

    for (int i : arr)
    {
        cout << i << " ";
    }
}
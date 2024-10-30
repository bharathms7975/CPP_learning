#include <iostream>
using namespace std;

int swap_alternate(int arr[], int size)
{
    int i = 0;

    while (i + 1 < size)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5};

    swap_alternate(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
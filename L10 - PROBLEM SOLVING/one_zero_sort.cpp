#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    int size = 8;
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }

        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}
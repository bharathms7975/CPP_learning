#include <iostream>
using namespace std;

int swapping(int arr[], int size, int begin, int leftside)
{
    int i = begin;
    int j = size - 1;
    int temp = 0;
    while (i < j)
    {
        while (arr[i] == leftside && i < j)
        {
            i++;
        }
        while (arr[j] > 1 && i < j)
        {
            j--;
        }

        swap(arr[i], arr[j]);
        i++;
        j--;
        temp = i;
    }
    return temp;
}

void printArray(int arr[], int size)
{
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int arr[6] = {0, 1, 2, 2, 1, 0};
    int size = 6;

    int temp = swapping(arr, size, 0, 0);
    swapping(arr, size, temp, 1);
    printArray(arr, size);
}
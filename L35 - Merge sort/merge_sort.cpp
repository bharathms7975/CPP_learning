#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainArrIndex = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainArrIndex++];
    }

    mainArrIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainArrIndex++];
    }

    // merge 2 array
    int index1 = 0;
    int index2 = 0;
    mainArrIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainArrIndex++] = arr1[index1++];
        }
        else
        {
            arr[mainArrIndex++] = arr2[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrIndex++] = arr1[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrIndex++] = arr2[index2++];
    }

    delete[] arr1;
    delete[] arr2;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {23, 5, 2, 665, 9, 5, 1, 0, 21, 32};
    int n = 10;
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
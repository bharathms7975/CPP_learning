#include <iostream>
using namespace std;

bool binary(int *arr, int s, int e, int k)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binary(arr, mid + 1, e, k);
    }
    else
    {
        return binary(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int k = 18;
    bool ans = binary(arr, 0, size - 1, k);
    if (ans)
    {
        cout << "K found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}
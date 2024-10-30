#include <iostream>
using namespace std;

bool search(int *arr, int n, int target)
{
    if (n == 0)
    {
        return false;
    }

    if (arr[0] == target)
    {
        return true;
    }

    else
    {
        return search(arr + 1, n - 1, target);
    }
}

int main()
{
    int arr[10] = {1, 3, 2, 4, 5, 6, 7, 8, 9, 10};

    bool ans = search(arr, 10, 11);
    if (ans)
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }
}
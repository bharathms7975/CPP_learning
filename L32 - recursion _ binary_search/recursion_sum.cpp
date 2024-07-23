#include <iostream>
using namespace std;

int rsum(int *arr, int N, int sum = 0)
{
    if (N == 0)
    {
        return sum;
    }
    sum += arr[0];
    return rsum(arr + 1, N - 1, sum);
}

int main()
{
    int arr[5] = {3, 2, 5, 1, 6};
    int sum = rsum(arr, 5);
    cout << sum << endl;
}
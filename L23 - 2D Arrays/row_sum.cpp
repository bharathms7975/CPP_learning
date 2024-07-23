#include <iostream>
using namespace std;

void sum1(int arr[][3], int row, int col)
{
    cout << "Printing sum of each row" << endl;
    int largest_sum = INT32_MIN;
    int idx = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (largest_sum < sum)
        {
            largest_sum = sum;
            idx = i;
        }
        cout << sum << " ";
    }
    cout << endl;
    cout << "Largest row is " << idx;
}

int main()
{
    int arr[3][3] = {3, 4, 11, 2, 12, 1, 7, 8, 7};

    sum1(arr, 3, 3);
}
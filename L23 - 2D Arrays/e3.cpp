#include <iostream>
using namespace std;

int print(int arr[], int n)
{
    int sum = 0;
    cout << sizeof(arr) << endl;

    return sum;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    cout << sizeof(arr) << endl;
    print(arr, 10);
}
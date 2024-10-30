#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    int mid = left + (right - left) / 2;
    while (left <= right)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        mid = left + (right - left) / 2;
    }
    // if not found return -1
    return -1;
}

int main()
{
    int arr[6] = {5, 11, 13, 17, 19, 25};
    int key = 25;
    int index = binary_search(arr, 6, key);
    cout << "Key element is in " << index << endl;
}

/*
Note: In sorted array or vector
1. for finding first occurance, in == case we change as per below
        if (arr[mid] == key)
        {
            ans = mid;
            right = mid - 1;
        }

2. for finding last occurance, in == case we change code as below
        if (arr[mid] == key)
        {
            ans = mid;
            left = mid + 1;
        }
3. for not found case we initially update ans = -1 as global variable in a function

4. no. of occurances of a target number can be found using formula :
    (last_occurance-first_occurance)+1
*/
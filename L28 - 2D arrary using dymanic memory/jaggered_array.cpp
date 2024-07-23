
// input/output
// Release heap memory

#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int **arr = new int *[row];
    int sizes[] = {4, 2, 3};

    // creating rows in heap memory
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[sizes[i]];
    }

    // for taking input of 2d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing 2d array
    cout << "Numbers in matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // release heap memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
#include <iostream>
using namespace std;

//note we use void when we are not returning nothing from function

void printArray(int arr[], int size)
{
    cout << "Printing an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int bha[10] = {1};

    printArray(bha, 10);
}
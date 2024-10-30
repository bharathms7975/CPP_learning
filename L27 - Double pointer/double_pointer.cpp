#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "good" << endl
         << endl;

    cout << "printing content ptr:" << ptr << endl;
    cout << "printing address ptr:" << &ptr << endl;

    cout << *ptr2 << endl;
    cout << **ptr2 << endl;

    return 0;
}
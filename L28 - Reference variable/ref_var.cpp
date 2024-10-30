#include <iostream>
using namespace std;

void update(int &j)
{
    j++;
}

int main()
{
    int i = 5;
    cout << "Before update: " << i << endl;
    update(i);
    cout << "after update: " << i << endl;

    return 0;
}
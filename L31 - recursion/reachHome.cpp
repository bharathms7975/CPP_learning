#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source: " << src << " , Destination:" << dest << endl;

    // base case
    if (src == dest)
    {
        cout << "Reached home" << endl;
        return;
    }

    src++;

    return reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);
}
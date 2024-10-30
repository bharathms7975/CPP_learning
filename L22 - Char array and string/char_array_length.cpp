#include <iostream>
using namespace std;

int getlength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char c[20];
    cout << "Enter your Name:" << endl;
    cin >> c;
    // cout << c << endl;

    cout << "Length of char array is " << getlength(c) << endl;
}
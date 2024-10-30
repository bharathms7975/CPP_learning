#include <iostream>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

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
    int n = getlength(c);
    reverse(c, n);
    cout << "reversed string : " << c << endl;
}
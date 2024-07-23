#include <iostream>
#include <cstring>
using namespace std;

char lowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        char temp = (ch - 'A' + 'a');
        return temp;
    }
    return ch;
}

bool isAlphanum(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (!isAlphanum(name[s]))
        {
            s++;
        }
        else if (!isAlphanum(name[e]))
        {
            e--;
        }
        else if (lowercase(name[s]) != lowercase(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char c[20];
    cout << "Enter a string: " << endl;
    cin.getline(c, sizeof(c));
    int n = getLength(c);
    cout << "Is string palindrome or not: " << palindrome(c, n) << endl;
}
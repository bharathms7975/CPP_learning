#include <iostream>
using namespace std;

char MaxOccCharacter(string s)
{

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            number = ch - 'a';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = max(maxi, arr[i]);
        }
    }
    char result = 'a' + ans;
    return result;
}

int main()
{
    string s;
    cin >> s;
    cout << MaxOccCharacter(s) << endl;
}
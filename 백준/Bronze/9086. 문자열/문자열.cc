#include <iostream>

using namespace std;

int main()
{
    string s;
    char first, last;
    int t;
    
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> s;
        for(int j = 0; j < s.length(); j++)
        {
            first = s[0];
            last = s.back();
        }
        cout << first << last << endl;
    }
    
    return 0;
}
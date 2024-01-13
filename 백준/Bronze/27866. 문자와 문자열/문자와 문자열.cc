#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    
    cin >> s >> n;
    
    
    for(int i = 0; i < s.length(); i++)
    {
        s.find(n);
    }
    cout << s[n-1];

    return 0;
}
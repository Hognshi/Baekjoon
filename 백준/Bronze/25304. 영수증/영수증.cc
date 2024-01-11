#include <iostream>

using namespace std;

int main()
{
    int total, n, a, b, sum = 0;
    
    cin >> total >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum += a*b;
    }
    if(total == sum)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
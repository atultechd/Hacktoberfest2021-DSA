#include <iostream>
using namespace std;
int main()
{
    int t;
    int solved = 0;
    cin >> t;
    while (t--)
    {
        int a;
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;
            if (a == 1)
            {
                ans++;
            }
        }
        if (ans >= 2)
        {
            solved++;
        }
    }
    cout << solved << endl;
    return 0;
}
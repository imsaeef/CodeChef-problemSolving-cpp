#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int s = 0;
        int r;
        while(n > 0)
        {
            r = n%10;
            n /= 10;
            s = s*10 + r;
        }
        cout << s << endl;
    }
}

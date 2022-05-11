#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=0;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int total=0;
        while (n--)
        {
            int a;
            cin >> a;
            total += a;
        }

        cout << "Case " << "#" << i+1 << ": " << (total % m) << endl;
        i++;
        
    }
    

    return 0;
}
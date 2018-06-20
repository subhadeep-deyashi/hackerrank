#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, k;
    cin >> n >> k;
    long int a[100001], ans = 0;
    map<long int, long int> m;
    for(long int i = 0; i < n; ++i)
    {
        cin >> a[i];
        a[i] -= (k*i);
        ++m[a[i]];
        ans = max(ans, m[a[i]]);
    }
    cout << n - ans;
    return 0;
}

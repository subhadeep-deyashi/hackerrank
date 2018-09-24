#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string num = to_string(n);
    return num == string(num.rbegin(), num.rend());
}

void generatePalindromes(set<int> &s)
{
    for(int i = 100; i < 1000; ++i)
        for(int j = 100; j < 1000; ++j)
            if(isPalindrome(i*j))
                s.insert(i*j);
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    set<int> s;
    int t;
    cin >> t;
    generatePalindromes(s);
    while(t--)
    {
        int x;
        cin >> x;
        cout << *(--s.lower_bound(x)) << endl;
    }
    return 0;
}

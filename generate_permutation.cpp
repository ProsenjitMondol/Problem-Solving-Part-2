// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> permutation(n);
        int left = 1;
        int right = n;
        for (int i = 0; i < n; i += 2)
        {
            permutation[i] = left++;
            permutation[i + 1] = right--;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int small = INT_MAX;
    int ar[101][101];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            small = min(small, ar[i][j]);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            ans += ar[i][j] - small;
    }
    cout << ans;
}

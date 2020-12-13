#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else return gcd(b, a % b);
}
 
ll lcm(ll a, ll b)
{
    return gcd(a, b) * a / gcd(a, b) * b / gcd(a, b);
}
 
int main()
{
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);
 
    ll n;
    cin >> n;
    ll ans = 2;
    for(ll i = 2; i <= n; i++)
    {
        ans = lcm(ans, i);
    }
    cout << ans + 1;
}

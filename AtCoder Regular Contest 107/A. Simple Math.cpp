#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <vector>
using namespace std;
 
#define MOD 998244353
 
typedef unsigned long long ll;
 
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll a, b, c;
	cin >> a >> b >> c;
	a = (a * (a + 1)) / 2;
	b = (b * (b + 1)) / 2;
	c = (c * (c + 1)) / 2;
	a %= MOD, b %= MOD, c %= MOD;
	cout << (((a * b) % MOD) * c % MOD) % MOD;
}

#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <string.h>
#include <string>
#include <set>
#include <stdlib.h>
using namespace std;
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef double lf;
typedef long double llf;
 
#define ret return
#define elif else if
#define in cin
#define out cout
#define newline '\n'
#define space ' '
#define tab '\t'
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
 
void solve()
{
	int n;
	string str;
	cin >> n >> str;
	stack<char> s;
	for (int i = 0; i < n; i++)
	{
		s.push(str[i]);
		if (i >= 2)
		{
			if (s.top() == 'x')
			{
				s.pop();
				if (s.top() == 'o')
				{
					s.pop();
					if (s.top() == 'f')
					{
						s.pop();
					}
					else
					{
						s.push('o');
						s.push('x');
					}
				}
				else
					s.push('x');
			}
		}
	}
	cout << s.size();
}
 
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
 
	solve();
}

#include <cstdio>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <stdlib.h>
using namespace std;
 
int main()
{
	unsigned long long n;
	cin >> n;
	vector <unsigned long long> three; // 
	vector <unsigned long long> five; // 
	for (unsigned long long i = 3; i <= n; i *= 3)
		three.push_back(i);
	for (unsigned long long i = 5; i <= n; i *= 5)
		five.push_back(i);
	for (unsigned long long i = 0; i < five.size(); i++)
	{
		unsigned long long x = n - five[i];
		for (unsigned long long j = 0; j < three.size(); j++)
		{
			if (x == three[j])
			{
				cout << j + 1 << ' ' << i + 1;
				return 0;
			}
		}
	}
	cout << "-1";
}

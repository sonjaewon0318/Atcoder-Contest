#include <cstdio>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
int main()
{
	long long ar[4];
	cin >> ar[0] >> ar[1] >> ar[2] >> ar[3];
	sort(ar, ar + 3);
	long long sum = ar[0] + ar[1] + ar[2] + ar[3];
	if (sum % 2 != 0)
	{
		cout << "No";
		return 0;
	}
	long long br[1000];
	long long cnt = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				br[cnt++] = ar[i] + ar[j];
			}
		}
	}
	long long cr[4];
	for (int i = 0; i < 4; i++)
		cr[i] = sum - cr[i];
	sum /= 2;
	for (int i = 0; i < 4; i++)
	{
		if (ar[i] == sum)
		{
			printf("Yes");
			return 0;
		}
		if (br[i] == sum)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}

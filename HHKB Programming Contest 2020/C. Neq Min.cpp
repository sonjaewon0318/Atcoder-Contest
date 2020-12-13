#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
 
int br[200001];
int n;
int ar[200001];
 
int main()
{
	scanf("%d", &n);
	int k = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &ar[i]);
	for (int i = 0; i < n; i++)
	{
		br[ar[i]]++;
		for (int j = k; j < 200001; j++)
		{
			if (br[j] == 0)
			{
				printf("%d\n", j);
				k = j;
				break;
			}
		}
	}
}

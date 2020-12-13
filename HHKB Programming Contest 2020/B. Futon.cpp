#include <cstdio>
#include <iostream>
using namespace std;
 
char ar[101][101];
 
int main()
{
	int h, w;
	scanf("%d%d", &h, &w);
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> ar[i][j];
		}
	}
	int xdir[4] = { 0, 1, 0, -1 };
	int ydir[4] = { 1, 0, -1, 0 };
	int cnt = 0;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (ar[i][j] == '.')
			{
				for (int aa = 0; aa < 4; aa++)
				{
					int nx = i + xdir[aa];
					int ny = j + ydir[aa];
					if (0 <= nx && nx < h && 0 <= ny && ny < w)
					{
						if (ar[nx][ny] == '.') cnt++;
					}
				}
			}
		}
	}
	printf("%d", cnt / 2);
}

#include <cstdio>
 
int main()
{
	char s, t;
	scanf("%c %c", &s, &t);
	if (s == 'Y')
	{
		if (t >= 'a' && t <= 'z')
			printf("%c", t - 'a' + 'A');
		else printf("%c", t);
	}
	else printf("%c", t);
}

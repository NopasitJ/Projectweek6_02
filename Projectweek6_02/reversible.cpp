#include<stdio.h>
#include<math.h>
int reverse(int a);
int main()
{
	int count = 0;
	for (int a = 1; a <= 9; ++a)
	{
		count += reverse(a);
	}
	printf("%d\n", count);
	return 0;
}
int reverse(int a)
{
	switch (a % 4)
	{
	case 1:
		return 0;
	case 0 :
	case 2 :
		return 20 * (int)pow(30, a / 2 - 1);
	case 3 :
		return 100 * (int)pow(500, (a - 3) / 4);
	}
	return 0;
}

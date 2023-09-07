#include <stdio.h>

int main()
{
	int T, n = 5, X, H, i_attack, i_health, f_health, f_attack;
	scanf("%d", &T);

	while (T != 0)
	{
		scanf("%d %d", &X, &H);
		i_health = H;
		i_attack = X / 2;
		int count = 0;
		for (int i = 1; i <= 5; i++)
		{
			if (i_health > 0)
			{
				i_health = i_health - i_attack;
				count++;
			}
		}
		f_health = i_health;

		while (f_health > 0)
		{
			f_health = f_health - X;
			count++;
		}
		printf("%d\n", count);
		T--;
	}

	return 0;
}

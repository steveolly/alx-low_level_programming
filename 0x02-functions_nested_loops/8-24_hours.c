#include "main.h"

/**
 * jack_bauer - function name
 *
 */

void jack_bauer(void)
{
	int min_1;
	int min_2;
	int sec_1;
	int sec_2;

	for (min_1 = 0; min_1 < 3; min_1++)
	{
		for (min_2 = 0; min_2 < 10; min_2++)
		{
			for (sec_1 = 0; sec_1 < 6; sec_1++)
			{
				for (sec_2 = 0; sec_2 < 10; sec_2++)
				{
					if (!(min_1 == 2 && min_2 >= 4))
					{
						_putchar(min_1 + '0');
						_putchar(min_2 + '0');
						_putchar(':');
						_putchar(sec_1 + '0');
						_putchar(sec_2 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}

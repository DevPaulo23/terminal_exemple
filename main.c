#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	printf("CONSOLE_EXEMPLE_SYSTEM\n\n");
	int _infinity_loop;
	while (_infinity_loop)
	{
		char _applet_now;
		scanf("%s", &_applet_now);
		if (_applet_now == 'info')
		{
			printf("version 1.0");
		}

		if (_applet_now == 'storage')
		{
			system("storage/emulated/0/");
		}

		if (_applet_now == 'tm')
		{
			system("time");
		}

		if (_applet_now == 'dt')
		{
			system("date");
		}
	}
	return 0;
	system("PAUSE");
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char _comand_system;
	int strong_loopin;
	printf("TERMINAL_EMULATOR_SYSTEM_BETA🌏\n\n");
	while (strong_loopin)
	{
		scanf("%s", &_comand_system);
		system(&_comand_system);


		if (_comand_system == 'terminus')
		{
			printf("version 1.0 beta\n");
		}
	}

	getchar();
	return 0;
}

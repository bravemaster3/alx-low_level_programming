#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define uint unsigned int

uint f1(uint param_1)
{
	return (param_1 ^ 0x3b) & 0x3f;
}

uint f2(long param_1, int param_2)
{
	uint local_10 = 0;
	int local_c;
	for (local_c = 0; local_c < param_2; local_c = local_c + 1)
	{
		local_10 = local_10 + (int)*(char *)(param_1 + local_c);
	}
	return (local_10 ^ 0x4f) & 0x3f;
}

uint f3(long param_1, int param_2)
{
	uint local_10 = 1;
	int local_c;

	for (local_c = 0; local_c < param_2; local_c = local_c + 1)
	{
		local_10 = (int)*(char *)(param_1 + local_c) * local_10;
	}
	return (local_10 ^ 0x55) & 0x3f;
}

uint f4(char *param_1, int param_2)
{
	uint uVar1;
	uint local_10 = (uint)*param_1;

	int local_c;

	for (local_c = 0; local_c < param_2; local_c = local_c + 1)
	{
		if ((int)local_10 < (int)param_1[local_c])
		{
			local_10 = (uint)param_1[local_c];
		}
	}
	srand(local_10 ^ 0xe);
	uVar1 = rand();
	return uVar1 & 0x3f;
}

uint f5(long param_1, int param_2)
{
	uint bVar1 = 0;
	int local_c;

	for (local_c = 0; local_c < param_2; local_c = local_c + 1)
	{
		bVar1 = bVar1 + *(char *)(param_1 + local_c) * *(char *)(param_1 + local_c);
	}
	return (bVar1 ^ 0xef) & 0x3f;
}

uint f6(char param_1)
{
	int local_10 = 0;
	int local_c;

	for (local_c = 0; local_c < param_1; local_c = local_c + 1)
	{
		local_10 = rand();
	}
	return ((uint)local_10 ^ 0xe5) & 0x3f;
}

int main(int argc, char *argv[])
{

	uint uVar1, key1, key2, key3, key4, key5, key6;
	char *input_string;

	if (argc != 2 || strlen(argv[1]) != 6)
	{
		printf("Usage: %s <input_string>\n", argv[0]);
		return 1;
	}

	input_string = argv[1];
	uVar1 = (uint)strlen(input_string);
	key1 = f1(uVar1);
	key2 = f2((long)input_string, (int)uVar1);
	key3 = f3((long)input_string, (int)uVar1);
	key4 = f4(input_string, (int)uVar1);
	key5 = f5((long)input_string, (int)uVar1);
	key6 = f6((int)input_string[0]);

	printf("%02X%02X%02X%02X%02X%02X", key1, key2, key3, key4, key5, key6);

	return 0;
}

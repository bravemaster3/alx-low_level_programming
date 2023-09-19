
undefined8 check_input(long param_1, int param_2, int param_3)

{
	undefined8 uVar1;
	int local_10;
	int local_c;

	local_10 = 0;
	while (true)
	{
		if (param_3 <= local_10)
		{
			if ((param_3 == 5) && ((param_2 < 1 || (0xf < param_2))))
			{
				uVar1 = 0;
			}
			else
			{
				uVar1 = 1;
			}
			return uVar1;
		}
		if ((*(int *)(param_1 + (long)local_10 * 4) < 1) ||
			(local_c = local_10, 0x4b < *(int *)(param_1 + (long)local_10 * 4)))
			break;
		while (local_c = local_c + 1, local_c < param_3)
		{
			if (*(int *)(param_1 + (long)local_10 * 4) == *(int *)(param_1 + (long)local_c * 4))
			{
				return 0;
			}
		}
		local_10 = local_10 + 1;
	}
	return 0;
}

void pick_numbers(int *param_1, int *param_2)

{
	int iVar1;
	time_t tVar2;

	tVar2 = time((time_t *)0x0);
	srand((uint)tVar2);
	iVar1 = rand();
	*param_2 = iVar1 % 0xf + 1;
	iVar1 = rand();
	*param_1 = iVar1 % 0x4b + 1;
	do
	{
		iVar1 = rand();
		param_1[1] = iVar1 % 0x4b + 1;
		iVar1 = check_input(param_1, *param_2, 2);
	} while (iVar1 == 0);
	do
	{
		iVar1 = rand();
		param_1[2] = iVar1 % 0x4b + 1;
		iVar1 = check_input(param_1, *param_2, 3);
	} while (iVar1 == 0);
	do
	{
		iVar1 = rand();
		param_1[3] = iVar1 % 0x4b + 1;
		iVar1 = check_input(param_1, *param_2, 4);
	} while (iVar1 == 0);
	do
	{
		iVar1 = rand();
		param_1[4] = iVar1 % 0x4b + 1;
		iVar1 = check_input(param_1, *param_2, 5);
	} while (iVar1 == 0);
	return;
}

void print_numbers(long param_1, uint param_2)

{
	int local_c;

	for (local_c = 0; local_c < 5; local_c = local_c + 1)
	{
		printf("%d ", (ulong) * (uint *)(param_1 + (long)local_c * 4));
	}
	printf("- %d\n", (ulong)param_2);
	return;
}

void check_result(long param_1, int param_2, long param_3, int param_4)

{
	bool bVar1;
	int local_18;
	int local_10;
	int local_c;

	local_18 = 0;
	local_10 = 0;
	do
	{
		if (4 < local_10)
		{
			bVar1 = param_2 == param_4;
			if ((local_18 == 0) && (bVar1))
			{
				puts("Congratulations, you win 1 point");
			}
			else if ((local_18 == 1) && (bVar1))
			{
				puts("Congratulations, you win 2 points");
			}
			else if ((local_18 == 2) && (bVar1))
			{
				puts("Congratulations, you win 5 points");
			}
			else if ((local_18 != 3) || (bVar1))
			{
				if ((local_18 == 3) && (bVar1))
				{
					puts("Congratulations, you win 50 points");
				}
				else if ((local_18 != 4) || (bVar1))
				{
					if ((local_18 == 4) && (bVar1))
					{
						puts("Congratulations, you win 5,000 points");
					}
					else if ((local_18 != 5) || (bVar1))
					{
						if ((local_18 == 5) && (bVar1))
						{
							puts("Congratulations, you win the Jackpot!");
						}
						else
						{
							puts("Sorry, try again!");
						}
					}
					else
					{
						puts("Congratulations, you win 1,000,000 points");
					}
				}
				else
				{
					puts("Congratulations, you win 500 points");
				}
			}
			else
			{
				puts("Congratulations, you win 5 points");
			}
			return;
		}
		for (local_c = 0; local_c < 5; local_c = local_c + 1)
		{
			if (*(int *)(param_1 + (long)local_10 * 4) == *(int *)(param_3 + (long)local_c * 4))
			{
				local_18 = local_18 + 1;
				break;
			}
		}
		local_10 = local_10 + 1;
	} while (true);
}

undefined8 main(int param_1, long param_2)

{
	int iVar1;
	undefined8 uVar2;
	long in_FS_OFFSET;
	undefined4 local_50;
	int local_4c;
	int local_48;
	int local_44;
	int local_40;
	int local_3c;
	int local_38;
	undefined local_28[24];
	long local_10;

	local_10 = *(long *)(in_FS_OFFSET + 0x28);
	if (param_1 == 7)
	{
		local_48 = atoi(*(char **)(param_2 + 8));
		local_44 = atoi(*(char **)(param_2 + 0x10));
		local_40 = atoi(*(char **)(param_2 + 0x18));
		local_3c = atoi(*(char **)(param_2 + 0x20));
		local_38 = atoi(*(char **)(param_2 + 0x28));
		local_4c = atoi(*(char **)(param_2 + 0x30));
		iVar1 = check_input(&local_48, local_4c, 5);
		if (iVar1 == 0)
		{
			dprintf(2,
					"Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75,  followed by \n - (second pool) one number from 1 to 15\n");
			uVar2 = 1;
		}
		else
		{
			pick_numbers(local_28, &local_50);
			print_numbers(local_28, local_50);
			check_result(local_28, local_50, &local_48, local_4c);
			uVar2 = 0;
		}
	}
	else
	{
		dprintf(2,
				"Usage: gm n1 n2 n3 n4 n5 bonus\n - (first pool) five different numbers from 1 to 75, fo llowed by \n - (second pool) one number from 1 to 15\n");
		uVar2 = 1;
	}
	if (local_10 != *(long *)(in_FS_OFFSET + 0x28))
	{
		/* WARNING: Subroutine does not return */
		__stack_chk_fail();
	}
	return uVar2;
}

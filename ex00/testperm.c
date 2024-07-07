#include <unistd.h>
#include <stdio.h>
#include "validate.h"

void	put_in_row(int row[4], int solution[4][4], int row_dest)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		solution[row_dest][i] = row[i];
		i++;
	}
}

void	print_solution(int solution[4][4])
{
	int	row;
	int	digit;
	char c;

	row = 0;
	while (row < 4)
	{
		digit = 0;
		while (digit < 4)
		{
			c = '0' + solution[row][digit];
			write(1, &c, 1);
			digit++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int main()
{
	int solution[4][4];
	int clues[4][4] = { {1,3,2,2}, {3,1,2,2}, {1,3,2,2}, {2,1,2,3} };
	int row_combination[4] = {0,0,0,0};
	int i;
	int count = 0;

	int possible_rows[24][4] =
   	{ {1,2,3,4}, {1,2,4,3}, {1,3,2,4}, {1,3,4,2}, {1,4,2,3}, {1,4,3,2},
	  {2,1,3,4}, {2,1,4,3}, {2,3,1,4}, {2,3,4,1}, {2,4,1,3}, {2,4,3,1},
	  {3,1,2,4}, {3,1,4,2}, {3,2,1,4}, {3,2,4,1}, {3,4,1,2}, {3,4,2,1},
	  {4,1,2,3}, {4,1,3,2}, {4,2,1,3}, {4,2,3,1}, {4,3,1,2}, {4,3,2,1} };


	while (1)
	{
		count++;
		i = 0;
		while (i < 4)
		{
			put_in_row(possible_rows[row_combination[i]], solution, i);
			i++;
		}

//		print_solution(solution);

		if (validate(solution, clues))
		{
			print_solution(solution);
			write(1, "VALID!\n", 7);
			break ;
		}
//		else
//			write(1, "Wrong.\n", 7);

		row_combination[0]++;
		if (row_combination[0] > 23)
		{
			row_combination[0] = 0;
			row_combination[1]++;
			if (row_combination[1] > 23)
			{
				row_combination[1] = 0;
				row_combination[2]++;
				if (row_combination[2] > 23)
				{
					row_combination[2] = 0;
					row_combination[3]++;
					if (row_combination[3] > 23)
					{
						write(1, "nope\n", 5);
						break ;
					}
				}
			}
		}
	}
	printf("%d\n", count);
	write(1, "END\n", 4);

	return 0;
}

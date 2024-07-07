/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:03:27 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/07 21:45:17 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_clues.h"
#include "row_loader.h"
#include "validate.h"
#include "printers.h"
#include "solver.h"
#include <stdlib.h>

void	load_the_rows(int possible_rows[24][4]);

int	main(int argc, char **argv)
{
	int		clues[4][4];
	int		solution[4][4];
	int		possible_rows[24][4];
	int		row_comp[4];

	if (argc != 2 || init_clues(argv[1], clues) != 1)
	{
		print_error_msg();
		return (0);
	}
	load_the_rows(possible_rows);
	init_solution(solution, possible_rows, row_comp);
	while (1)
	{
		if (validate(solution, clues))
		{
			print_board(solution);
			return (0);
		}
		if (next_solution(solution, possible_rows, row_comp) == -1)
		{
			print_error_msg();
			return (0);
		}
	}
}

void	load_the_rows(int possible_rows[24][4])
{
	char	*str1;
	char	*str2;

	str1 = "432134214231243132412341431234124132143231421342";
	str2 = "421324134123142321431243321423143124132421341234";
	row_loader(str1, str2, possible_rows);
}

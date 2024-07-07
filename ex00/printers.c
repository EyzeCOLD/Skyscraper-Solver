/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:37:56 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/07 19:02:40 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j == 3)
			{
				print_char(board[i][j] + '0');
				j++;
			}
			else
			{
				print_char(board[i][j] + '0');
				write(1, " ", 1);
				j++;
			}
		}
		write(1, "\n", 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_clues.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:24:13 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/07 22:07:48 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_str_len(char *args)
{
	int	len;

	len = 0;
	while (args[len])
	{
		len++;
	}
	return (len);
}

int	init_row(int clues[4][4], char *args, int col)
{
	int	j;
	int	arg_index;

	j = 0;
	arg_index = 0;
	while (j < 4)
	{
		if (args[arg_index] >= '1' && args[arg_index] <= '4')
		{
			clues[col][j] = args[arg_index] - 48;
			arg_index += 2;
			j++;
		}
		else
			return (0);
	}
	return (1);
}

int	init_clues(char *args, int clues[4][4])
{
	int		i;
	int		col;
	int		len;

	len = get_str_len(args);
	if (len != 31)
		return (0);
	col = 0;
	i = 0;
	while (col < 4)
	{
		if (init_row(clues, &args[i], col) != 1)
			return (0);
		i += 8;
		col++;
	}
	return (1);
}

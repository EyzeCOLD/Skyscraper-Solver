/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_loader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinarli <tpinarli@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:39:16 by tpinarli          #+#    #+#             */
/*   Updated: 2024/07/07 22:03:46 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	row_loader(char *str1, char *str2, int possible_rows[24][4])
{
	int	row;
	int	digit;
	int	k;

	row = 0;
	k = 0;
	while (row < 24)
	{
		digit = 0;
		while (digit < 4)
		{
			if (row < 12)
				possible_rows[row][digit] = str1[k] - '0';
			if (row > 11)
				possible_rows[row][digit] = str2[k - 48] - '0';
			digit++;
			k++;
		}
		row++;
	}
}

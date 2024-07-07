/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_row_permutations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:08:35 by juaho             #+#    #+#             */
/*   Updated: 2024/07/06 20:20:18 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*generate_row_permutations(char *str, int *row_permutations[24][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (j < 5)
		{
			if (j < 4)
				*row_permutations[i][j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (row_permutations);
}

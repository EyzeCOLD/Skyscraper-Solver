/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_loader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinarli <tpinarli@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:39:16 by tpinarli          #+#    #+#             */
/*   Updated: 2024/07/07 19:15:18 by tpinarli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_loader(char *str1, char *str2, int possible_rows[24][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 12)
	{
		j = 0;
		while (j < 4)
		{
			possible_rows[i][j] = str1[k] - '0';
			j++;
			k++;
		}
		i++;
	}
	k = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 4)
		{
			possible_rows[i][j] = str2[k] - '0';
			j++;
			k++;
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char	first_12_rows;
	char	second_12_rows;
	char	*first;
	char	*second;
	int	i;
	int	j;
	int	possible_rows[24][4];

	first = "432134214231243132412341431234124132143231421342";
	second = "421324134123142321431243321423143124132421341234";
	row_loader(first, second, possible_rows);
	i = 0;
	while(i < 24)
	{
		j = 0;
		while(j < 4)
		{
			printf("%d", possible_rows[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
}*/

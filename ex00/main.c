/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:03:27 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/07 20:24:05 by mhurtamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <init_clues.h>
#include <row_loader.h>

int	main(int argc, char **argv)
{
	int	clues[4][4];
	char	*first;
	char	*second;
	if(argc != 2 || init_clues(argv[1], clues) != 1)
	{
		print_error_msg();	
		return (0);
	}
	first = "432134214231243132412341431234124132143231421342";
	second = "421324134123142321431243321423143124132421341234";
	row_loader(first, second, possible_rows);
}

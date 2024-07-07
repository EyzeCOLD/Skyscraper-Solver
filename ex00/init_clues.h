/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_clues.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhurtamo <mhurtamo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:47:26 by mhurtamo          #+#    #+#             */
/*   Updated: 2024/07/07 21:47:46 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_CLUES_H
# define INIT_CLUES_H

int	get_str_len(char *args);

int	init_row(int clues[4][4], char *args, int col);

int	init_clues(char *args, int clues[4][4]);

#endif

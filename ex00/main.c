/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:18:10 by sengle            #+#    #+#             */
/*   Updated: 2019/07/14 19:25:04 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

/*
 * each level's total rows = TOTAL_ROWS_LEVEL_1 + level - 1
 * each
 */
#define	TOTAL_ROWS_LEVEL_1	3
#define	COLS_ROW_1			3
#define	COLS_ROW_3			7
#define	DOOR_ROW_SIZE_1		3
#define	DOOR_WIDTH_SIZE_1	1
#define	BOTTOM_ROW			1

void	ft_putchar(char c);

void	sastantua(int size);

int		width_row(int size, int type);

int		main(void)
{
	int i;

	for (i = 1; i <= 20; i++)
		printf("size %d: %d\n", i, width_row(i, BOTTOM_ROW));

	for (i = -1; i <= 6; i++)
		sastantua(i);
}

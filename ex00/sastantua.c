/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:25:48 by sengle            #+#    #+#             */
/*   Updated: 2019/07/14 19:23:27 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
7, 9, 9, 11, 11, 13

COLS_ROW_1 + 4 + (1 / 2) * 2 = 7

   +4
*1*
3
5
7
_  +6
*2 / 2 = 1 * 2 = 2
13
15
17
19
_  +6
*3* / 2 = 1 * 2 = 2
25
27
31
33
35
_  +8
*4*	/ 2 = 2 * 2 = 4
43
45
47
49
51
53
_
*5*	/ 2 = 2 * 2 = 4

61 +8
63
65
67
69
71
73
_
*6* / 2 = 3 * 2 = 6
83 +10
85
87
89
91
93
95
97
_
*7* / 2 = 3
107  +10

(size / 4)

1   2   3   4   5   6
7, 19, 35, 53, 73, 97, ...

*/

void	ft_putchar(char c);

int		width_row(int size, int type)
{
	if (type == BOTTOM_ROW)
	{
		return (4 + (size / 2) * 2);
	}
	return (0);
}

void	display_level(int level, int size)
{
	level = 0;
	size = 0;
	level = size;
	size = level;
}

void	sastantua(int size)
{
	int	level;

	if (size <= 0)
		return ;
	level = 1;
	while (level <= size)
		display_level(level++, size);
}

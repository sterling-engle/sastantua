/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 18:25:48 by sengle            #+#    #+#             */
/*   Updated: 2019/07/14 21:06:25 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * PYRAMID_ROWS(size) macro returns the number of rows for pyramid size
 * DOOR_WIDTH(size) macro returns the width of the door for pyramid size
 */
#define PYRAMID_ROWS(size)	((2 * size) + ((size * (size + 1)) / 2))
#define	DOOR_WIDTH(size)	(size - ((size % 2) ? 0 : 1))

void		ft_putchar(char c);

/*
 * output n copies of character c to standard output using ft_putchar(c)
 */
static void	putnchars(int n, char c)
{
	while (n-- > 0)
		ft_putchar(c);
}

/*
 *	draw_row - displays one row of Sastantua's pyramid
 *
 *			   Local Variables:
 *
 *			   size:	pyramid size
 *			   row:		output row, 0 is first one
 *			   spaces:	number of spaces to display before the '/' character
 *			   stars:	number of stars to display
 *
 *			   Algorithm:
 *
 *			   1. output spaces ' ' before the first '/'
 *			   2. output the '/'
 *			   3. if row >= a row that contains the door:
 *					A. output the '*' before the door
 *					B. if size >= 5 and row equals the middle of the door rows:
 *						a. output '|' door characters leaving one for '$' handle
 *						b. output '$' door handle followed by '|' door edge
 *					C. else output '|' door characters for the entire DOOR_WIDTH(size)
 *					D. output the rest of the '*' after the door
 *				4. else output stars * 2 + 1 '*' characters across the pyramid row
 *				5. output '\' and a newline.
 */
static void	draw_row(int size, int row, int spaces, int stars)
{
	putnchars(spaces, ' ');
	ft_putchar('/');
	if (row >= PYRAMID_ROWS(size) - DOOR_WIDTH(size))
	{
		putnchars(stars - (DOOR_WIDTH(size) - 1) / 2, '*');
		if (size >= 5 && row == PYRAMID_ROWS(size) - DOOR_WIDTH(size) / 2 - 1)
		{
			putnchars(DOOR_WIDTH(size) - 2, '|');
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			putnchars(DOOR_WIDTH(size), '|');
		putnchars(stars - (DOOR_WIDTH(size) - 1) / 2, '*');
	}
	else
		putnchars(stars * 2 + 1, '*');
	ft_putchar('\\');
	ft_putchar('\n');
}

/*
 *	sastantua - displays Sastantua's pyramid of size levels
 *
 *				Local Variables:
 *
 *				level:		 pyramid level where one is the highest
 *				line:		 counts lines within a pyramid level
 *				row:		 pyramid row, row 0 is the first row, stars[] index
 *				stars_count: counts stars within HALF a row of the pyramid
 *				stars[]:	 array of integers containing number of stars per row
 *
 *				Algorithm:
 *
 *				1. while the pyramid level is less than or equal to its size:
 *					A. for each line in the level, calculate the stars_count for that row
 *				2. while the row stars[] index is less than the pyramid's rows:
 *					A. draw the row using draw_row(int size, int row, int spaces, int stars)
 */
void		sastantua(int size)
{
	int		level;
	int		line;
	int		row;
	int		stars_count;
	int		stars[PYRAMID_ROWS(size)];

	level = 1;
	row = 0;
	stars_count = 0;
	while (level++ <= size)
	{
		line = 1;
		while (line++ < (level + 2))
		{
			stars[row++] = stars_count;
			stars_count++;
		}
		if (level % 2)
			stars_count += ((level - 1) / 2) + 1;
		else
			stars_count += (level / 2) + 1;
	}
	row = -1;
	while (++row < PYRAMID_ROWS(size))
		draw_row(size, row, stars[PYRAMID_ROWS(size) - 1] - stars[row], stars[row]);
}

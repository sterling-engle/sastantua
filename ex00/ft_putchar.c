/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:46:15 by sengle            #+#    #+#             */
/*   Updated: 2019/07/14 23:03:51 by sengle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** ft_putchar - ft (Forty-Two) implementation of Linux putchar(3) with write(2).
**
**				putchar(c) is equivalent to putc(c, stdout); which outputs
**				character c to FILE * stream stdout. stdout (standard output)
**				is a text stream opened at program start for writing
**				conventional output.
**
**				write(2) - writes to a file descriptor:
**
**				ssize_t write(int fd, const void *buf, size_t count);
**
**				write() writes up to count bytes from the buffer starting at buf
**				to the file referred to by the file descriptor fd (1 = stdout).
**				Data types size_t and ssize_t are unsigned and signed integers.
**
** see manpage:	putchar(3), stdio(3), write(2)
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

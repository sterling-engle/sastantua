# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sengle <sengle@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/14 11:52:53 by sengle            #+#    #+#              #
#    Updated: 2019/07/14 19:17:51 by sengle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sastantua
FILES_OTHER = main.c ft_putchar.c
FILES = sastantua.c $(FILES_OTHER)
OBJECTS_OTHER = main.o ft_putchar.o
OBJECTS = sastantua.o $(OBJECTS_OTHER)

all:		$(NAME)

$(NAME):	$(FILES)
			gcc -Wall -Werror -Wextra $(FILES) -o $(NAME)

clean:
			/bin/rm -f $(OBJECTS) rush00.o rush01.o rush02.o rush03.o

fclean:	clean
			/bin/rm -f $(NAME) rush00 rush01 rush02 rush03

re:			fclean all

.PHONY:		all clean fclean re

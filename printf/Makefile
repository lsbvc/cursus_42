# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 12:29:27 by lvelasqu          #+#    #+#              #
#    Updated: 2022/12/20 12:44:09 by lvelasqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIB = ar rcs

SRC = 	  

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Werror -Wall -Wextra

RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all 

comp: 
	$(CC) $(CFLAGS) ft_strnstr.c ft_strlen.c

.PHONY: all clean fclean re comp


	▀█████████▄     ▄████████ ███▄▄▄▄        ▄█  ▄█     ▄████████
	  ███    ███   ███    ███ ███▀▀▀██▄     ███ ███    ███    ███
	  ███    ███   ███    █▀  ███   ███     ███ ███▌   ███    █▀
	 ▄███▄▄▄██▀   ▄███▄▄▄     ███   ███     ███ ███▌  ▄███▄▄▄
	 ▀███▀▀▀██▄  ▀▀███▀▀▀     ███   ███     ███ ███▌ ▀▀███▀▀▀
	  ███    ██▄   ███    █▄  ███   ███     ███ ███    ███    █▄
	  ███    ███   ███    ███ ███   ███     ███ ███    ███    ███
	▄█████████▀    ██████████  ▀█   █▀  █▄ ▄███ █▀     ██████████
	 									 ▀▀▀▀▀▀
	  ▄████████  ▄██████▄   ▄████████    ▄█   ▄█▄    ▄████████
	  ███    ███ ███    ███ ███    ███   ███ ▄███▀   ███    ███
	  ███    ███ ███    ███ ███    █▀    ███▐██▀     ███    █▀
	  ███▄▄▄▄██▀ ███    ███ ███         ▄█████▀      ███
	▀▀███▀▀▀▀▀   ███    ███ ███        ▀▀█████▄    ▀███████████
	▀▀██████████ ███    ███ ███    █▄    ███▐██▄            ███
	  ███    ███ ███    ███ ███    ███   ███ ▀███▄    ▄█    ███
	  ███    ███  ▀██████▀  ████████▀    ███   ▀█▀  ▄████████▀
	  ███    ███                         ▀

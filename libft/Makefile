# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvelasqu <lvelasqu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:31:30 by lvelasqu          #+#    #+#              #
#    Updated: 2022/12/16 18:31:34 by lvelasqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = ar rcs

SRC = ft_bzero.c   ft_isalnum.c ft_memcpy.c \
      ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memset.c  ft_strlen.c \
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c \
	  ft_strnstr.c ft_atoi.c    ft_calloc.c \
	  ft_strdup.c  ft_memcmp.c  ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c \
	  ft_itoa.c    ft_strmapi.c ft_striteri.c \
	  ft_split.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c
	  

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c \
            ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc

CFLAGS = -Werror -Wall -Wextra

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ_BONUS) $(OBJ)
	$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all 

comp: 
	$(CC) $(CFLAGS) ft_strnstr.c ft_strlen.c

.PHONY: all clean fclean re bonus comp


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


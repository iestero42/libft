# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 11:00:43 by iestero-          #+#    #+#              #
#    Updated: 2022/12/17 14:05:14 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDE = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_strnstr.c ft_atoi.c ft_memmove.c ft_memcmp.c ft_strdup.c \
		ft_calloc.c ft_substr.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strjoin.c

SRC_BONUS =	ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c \
			ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(SRC_BONUS:.c=.0)

INCLUDE = libft.h

$(NAME): $(OBJS) $(INCLUDE)
	@ar rsc $(NAME) $(OBJS)
	
all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS) $(INCLUDE)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all 

rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus

